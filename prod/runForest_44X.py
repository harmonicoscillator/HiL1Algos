
import FWCore.ParameterSet.VarParsing as VarParsing

ivars = VarParsing.VarParsing('python')

ivars.register ('randomNumber',
                1,
                ivars.multiplicity.singleton,
                ivars.varType.int,
                "Random Seed")

ivars.randomNumber = 1
#ivars.inputFiles = "file:/net/hisrv0001/home/icali/hadoop/Pythia/Z2/ppDijet50/reco_v0/set2_random70000_HydjetDrum_362.root"
#ivars.inputFiles = "file:/mnt/hadoop/cms/store/user/frankma/HIHighPt/promptskim-hihighpt-hltjet80-pt90-v0//cd475ecb0c871a17cabcfbdd64b9e8dc/reco_1_1_Ls9.root"
#ivars.inputFiles = "file:/mnt/hadoop/cms/store/user/frankma/HIHighPt/promptskim-hihighpt-hltjet80-pt90-v0//cd475ecb0c871a17cabcfbdd64b9e8dc/reco_2_1_xux.root"
#ivars.inputFiles = "file:/mnt/hadoop/cms/store/user/frankma/HIHighPt/promptskim-hihighpt-hltjet80-pt90-v2/d358bdc6c19493517e3e245a7413a024/reco_1010_1_pNV.root"
# "file:/mnt/hadoop/cms/store/user/kimy/HIMinBiasUPC/MinBias-reTracking-v1v2/output_101_1_Qvf.root" 
ivars.inputFiles =  'file:/mnt/hadoop/cms/store/user/velicanu/step2_RAW2DIGI_L1Reco_RECO_94_1_Br3.root'
ivars.outputFile = 'HiForest.root'
ivars.maxEvents = 100

ivars.parseArguments()


import FWCore.ParameterSet.Config as cms

process = cms.Process('hiForestAna2011')

process.options = cms.untracked.PSet(
   wantSummary = cms.untracked.bool(True)
)


hiTrackQuality = "highPurity"              # iterative tracks
#hiTrackQuality = "highPuritySetWithPV"    # calo-matched tracks

doElectrons = False
doRegitForBjets = False


#####################################################################################

process.load("CmsHi.JetAnalysis.HiForest_cff")
process.HiForest.inputLines = cms.vstring("HiForest V2",
                                          "PF : iterative tracks",
                                          "EP Flattening OFF",
                                          "Electrons OFF",
                                          "Preshower OFF"
                                          )

#####################################################################################
# Input source
#####################################################################################

process.source = cms.Source("PoolSource",
 duplicateCheckMode = cms.untracked.string("noDuplicateCheck"),
    fileNames = cms.untracked.vstring(ivars.inputFiles))


# DATA EMULATION
process.source.inputCommands = cms.untracked.vstring("keep *",
                                                     "drop *_hiSignal*_*_*",
                                                     "drop *_*GenJet*_*_*",
                                                     "drop *_*GenPar*_*_*",
                                                     "drop *_gen*_*_*"
                                                     )
process.source.dropDescendantsOfDroppedBranches=cms.untracked.bool(False)



# Number of events we want to process, -1 = all events
process.maxEvents = cms.untracked.PSet(
            input = cms.untracked.int32(ivars.maxEvents))


#####################################################################################
# Load some general stuff
#####################################################################################

process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')
process.load('Configuration.StandardSequences.Services_cff')
process.load('Configuration.StandardSequences.GeometryExtended_cff')
process.load('Configuration.StandardSequences.MagneticField_38T_cff')
process.load('SimGeneral.MixingModule.mixNoPU_cfi')
process.load('Configuration.StandardSequences.Digi_cff')
process.load('Configuration.StandardSequences.SimL1Emulator_cff')
process.load('Configuration.StandardSequences.DigiToRaw_cff')
process.load('Configuration.StandardSequences.RawToDigi_cff')
process.load('Configuration.StandardSequences.ReconstructionHeavyIons_cff')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('RecoLocalTracker.SiPixelRecHits.PixelCPEESProducers_cff')
#process.load('MitHig.PixelTrackletAnalyzer.pixelHitAnalyzer_cfi')

# Data Global Tag 44x 
process.GlobalTag.globaltag = 'GR_P_V27A::All'

# process.Timing = cms.Service("Timing")

# MC Global Tag 44x 
#process.GlobalTag.globaltag = 'STARTHI44_V7::All'

# load centrality
from CmsHi.Analysis2010.CommonFunctions_cff import *
overrideCentrality(process)
process.HeavyIonGlobalParameters = cms.PSet(
	centralityVariable = cms.string("HFtowers"),
	centralitySrc = cms.InputTag("hiCentrality")
	)
process.hiCentrality.pixelBarrelOnly = False
process.load("CmsHi.JetAnalysis.RandomCones_cff")

process.RandomNumberGeneratorService.generator.initialSeed = ivars.randomNumber 
process.RandomNumberGeneratorService.akPu3PFConesAna = process.RandomNumberGeneratorService.generator.clone()
process.RandomNumberGeneratorService.icPu5CaloConesAna = process.RandomNumberGeneratorService.generator.clone()
process.RandomNumberGeneratorService.akPu5PFConesAna = process.RandomNumberGeneratorService.generator.clone()
process.RandomNumberGeneratorService.akPu3CaloConesAna = process.RandomNumberGeneratorService.generator.clone()
process.RandomNumberGeneratorService.akPu5CaloConesAna = process.RandomNumberGeneratorService.generator.clone()
process.RandomNumberGeneratorService.multiPhotonAnalyzer = process.RandomNumberGeneratorService.generator.clone()

# EcalSeverityLevel ES Producer
process.load("RecoLocalCalo/EcalRecAlgos/EcalSeverityLevelESProducer_cfi")
process.load("RecoEcal.EgammaCoreTools.EcalNextToDeadChannelESProducer_cff")

#####################################################################################
# Define tree output
#####################################################################################

process.TFileService = cms.Service("TFileService",
                                  fileName=cms.string(ivars.outputFile))

#####################################################################################
# Additional Reconstruction and Analysis
#####################################################################################

# MET: Calorimeter based MET
process.load("RecoMET.METProducers.CaloMET_cfi") 

process.load("CmsHi.JetAnalysis.hcalNoise_cff")

# Define Analysis sequencues
process.load('CmsHi.JetAnalysis.EventSelection_cff')
process.load('CmsHi.JetAnalysis.ExtraGenReco_cff')
process.load('CmsHi.JetAnalysis.ExtraTrackReco_cff')
process.load('CmsHi.JetAnalysis.ExtraPfReco_cff')
process.load('CmsHi.JetAnalysis.ExtraJetReco_cff')
process.load('CmsHi.JetAnalysis.ExtraEGammaReco_cff')
process.load('CmsHi.JetAnalysis.PatAna_cff')
process.load('CmsHi.JetAnalysis.JetAnalyzers_cff')
process.load('CmsHi.JetAnalysis.TrkAnalyzers_cff')
process.load('CmsHi.JetAnalysis.EGammaAnalyzers_cff')

process.load("MitHig.PixelTrackletAnalyzer.METAnalyzer_cff")
process.load("CmsHi.JetAnalysis.pfcandAnalyzer_cfi")
process.pfcandAnalyzer.skipCharged = False
process.pfcandAnalyzer.pfPtMin = 0
process.interestingTrackEcalDetIds.TrackCollection = cms.InputTag("hiGeneralCaloMatchedTracks")

#process.load("HiMuonAlgos.HLTMuTree.hltMuTree_cfi")

process.genpana = cms.EDAnalyzer("GenParticleCounter",
                                 src = cms.untracked.string("hiGenParticles"),
                                 doCentrality = cms.untracked.bool(False),
                                 VertexProducer = cms.untracked.string("hiSelectedVertex")
                                 )

#########################
# Track Analyzer
#########################
process.anaTrack.qualityStrings = cms.untracked.vstring('highPurity','highPuritySetWithPV')
process.pixelTrack.qualityStrings = cms.untracked.vstring('highPurity','highPuritySetWithPV')
process.mergedTrack.qualityStrings = cms.untracked.vstring('highPurity','highPuritySetWithPV')

# Muons
process.load("MuTrig.HLTMuTree.hltMuTree_cfi")
process.muonTree = process.hltMuTree.clone()
process.muonTree.doGen = cms.untracked.bool(True)

# Event tree
process.load("CmsHi/HiHLTAlgos.hievtanalyzer_cfi")
# Not working for the moment..
#process.hiEvtAnalyzer.doMC = cms.bool(True)
process.hiEvtAnalyzer.doEvtPlane = cms.bool(True)

#Commented by Yen-Jie
#process.hiPixelAdaptiveVertex.useBeamConstraint = False

process.load("RecoHI.HiMuonAlgos.HiRecoMuon_cff")
process.muons.JetExtractorPSet.JetCollectionLabel = cms.InputTag("iterativeConePu5CaloJets")
process.hiTracks.cut = cms.string('quality("' + hiTrackQuality+  '")')

process.pfTrack.TrackQuality = cms.string(hiTrackQuality)

process.reco_extra =  cms.Path(
    process.hiTrackReco
    #        *process.muonRecoPbPb
    *process.HiParticleFlowLocalReco
    *process.HiParticleFlowReco
    *process.iterativeConePu5CaloJets
    *process.PFTowers
)    
    

# seed the muons with iterative tracks
process.globalMuons.TrackerCollectionLabel = "hiGeneralCaloMatchedTracks"
process.muons.TrackExtractorPSet.inputTrackCollection = "hiGeneralCaloMatchedTracks"
process.muons.inputCollectionLabels = ["hiGeneralCaloMatchedTracks", "globalMuons", "standAloneMuons:UpdatedAtVtx", "tevMuons:firstHit", "tevMuons:picky", "tevMuons:dyt"]

# set track collection to iterative tracking
process.pfTrack.TkColList = cms.VInputTag("hiGeneralCaloMatchedTracks")

process.reco_extra_jet    = cms.Path(process.iterativeConePu5CaloJets *
                                     process.iterativeCone5CaloJets *
                                     process.recoAk1to6 *
                                     process.photon_extra_reco)



process.pat_step          = cms.Path(process.makeHeavyIonJets +
                                     process.makeHeavyIonPhotons
                                     )
    

process.multiPhotonAnalyzer.GammaEtaMax = cms.untracked.double(100)
process.multiPhotonAnalyzer.GammaPtMin = cms.untracked.double(10)

process.TriggerPrimitives = cms.EDAnalyzer('TriggerPrimitives',
                              ECALDigis = cms.InputTag("ecalDigis:EcalTriggerPrimitives"),
                              HCALDigis = cms.InputTag("hcalDigis"),
                              GCTDigis = cms.InputTag("gctDigis")
)

process.ana_step          = cms.Path(
                                      #process.hcalNoise +
                                      #process.jetAnalyzers +  
                                      process.TriggerPrimitives +
                                      process.icPu5JetAnalyzer +
                                      process.akPu5PFJetAnalyzer +
                                      process.akPu5CaloJetAnalyzer +
                                      #process.multiPhotonAnalyzer +
#                                       process.anaTrack + process.pixelTrack + process.mergedTrack +
                                      process.anaTrack + process.mergedTrack +
                                      #process.pfcandAnalyzer +
                                      #process.met * process.anaMET +
				      process.muonTree +
				      process.hiEvtAnalyzer +
#                                      process.randomCones +
                                      process.hltMuTree +
                                      process.HiForest
                                      )


#process.pcollisionEventSelection = cms.Path(process.collisionEventSelection)
#process.pHBHENoiseFilter = cms.Path( process.HBHENoiseFilter )
#process.phiEcalRecHitSpikeFilter = cms.Path(process.hiEcalRecHitSpikeFilter )
#process.ppreTrgTest = cms.Path(process.preTrgTest )
#process.pminBiasBscFilter = cms.Path(process.minBiasBscFilter )
#process.ppostTrgTest = cms.Path(process.postTrgTest )
#process.phfCoincFilter = cms.Path(process.hfCoincFilter )
#process.ppurityFractionFilter = cms.Path(process.purityFractionFilter )

# Customization
from CmsHi.JetAnalysis.customise_cfi import *
setPhotonObject(process,"cleanPhotons")

process.load('L1Trigger.Configuration.L1Extra_cff')
process.load('CmsHi.HiHLTAlgos.hltanalysis_cff')

process.hltanalysis.hltresults = cms.InputTag("TriggerResults","","HLT")
process.hltAna = cms.Path(process.hltanalysis)
process.pAna = cms.EndPath(process.skimanalysis)
process.reco_extra*=process.L1Extra


process.load('CmsHi.JetAnalysis.rechitanalyzer_cfi')
process.rechitanalyzer.TowerTreePtMin = cms.untracked.double(0)
process.rechitanalyzer.saveBothVtx = cms.untracked.bool(True)
process.rechitAna = cms.Path(process.rechitanalyzer+process.pfTowers)

########### random number seed

#####################################################################################
# Edm Output
#####################################################################################

#process.out = cms.OutputModule("PoolOutputModule",
#                               fileName = cms.untracked.string("output.root")
#                               )
#process.save = cms.EndPath(process.out)
