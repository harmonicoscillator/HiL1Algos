import FWCore.ParameterSet.Config as cms

process = cms.Process('hiForestAna2012')

process.options = cms.untracked.PSet(
    wantSummary = cms.untracked.bool(True)
)

#####################################################################################
# High Level Setup
#####################################################################################
isData=True
saveAllGenParticles = False

import FWCore.ParameterSet.VarParsing as VarParsing
ivars = VarParsing.VarParsing('python')

ivars.register ('randomNumber',
                1,
                ivars.multiplicity.singleton,
                ivars.varType.int,
                "Random Seed")

ivars.randomNumber = 1
#ivars.inputFiles = 'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-1.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-2.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-3.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-4.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-10.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-11.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-12.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-13.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-14.root',
#'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-26.root'

ivars.outputFile = '/net/hisrv0001/home/luck/scratch0/data/HiForest.root'
ivars.maxEvents = -1

if not isData:
   ivars.parseArguments()

#####################################################################################
# Input source
#####################################################################################

process.source = cms.Source("PoolSource",
 duplicateCheckMode = cms.untracked.string("noDuplicateCheck"),
    fileNames = cms.untracked.vstring(
   #ivars.inputFiles
   'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-1.root',
   'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-2.root',
   'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-3.root'
   #'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-4.root',
   #'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-10.root',
   #'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-11.root',
   #'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-12.root',
   #'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-13.root',
   #'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-14.root',
   #'file:/net/hisrv0001/home/luck/scratch0/data/RECO_L1EMUL-26.root'
   ))

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
# Data Global Tag 44x 
process.GlobalTag.globaltag = 'GR_P_V27A::All'
# MC Global Tag 44x 
# process.GlobalTag.globaltag = 'STARTHI44_V7::All'

# load centrality
from CmsHi.Analysis2010.CommonFunctions_cff import *
overrideCentrality(process)
process.HeavyIonGlobalParameters = cms.PSet(
	centralityVariable = cms.string("HFtowers"),
	centralitySrc = cms.InputTag("hiCentrality")
	)

#####################################################################################
# Define tree output
#####################################################################################
process.TFileService = cms.Service("TFileService",
                                  fileName=cms.string(ivars.outputFile))

#####################################################################################
# Additional Reconstruction and Analysis
#####################################################################################
process.load("CmsHi.JetAnalysis.hcalNoise_cff")
process.load('CmsHi.JetAnalysis.ExtraGenReco_cff')
process.load('CmsHi.JetAnalysis.ExtraTrackReco_cff')
process.load('CmsHi.JetAnalysis.ExtraPfReco_cff')
process.load('CmsHi.JetAnalysis.ExtraJetReco_cff')
process.load('CmsHi.JetAnalysis.ExtraEGammaReco_cff')
process.load('CmsHi.JetAnalysis.PatAna_cff')
process.load('CmsHi.JetAnalysis.JetAnalyzers_cff')
process.load('CmsHi.JetAnalysis.TrkAnalyzers_cff')
process.load('CmsHi.JetAnalysis.EventSelection_cff')

##################### Jet Related
process.iterativeConePu5CaloJets.doAreaFastjet = False

################################################################
# Analyzers
################################################################

##################### Event Tree Analyzers
process.load("CmsHi/HiHLTAlgos.hievtanalyzer_cfi")
#process.hiEvtAnalyzer.doMC = cms.bool(True) # Not working for the moment..
process.hiEvtAnalyzer.doEvtPlane = cms.bool(True)

##################### Jet Tree Analyzers
process.icPu5JetAnalyzer.isMC = cms.untracked.bool(False)
process.icPu5JetAnalyzer.trackTag = "hiSelectedTracks"
process.icPu5JetAnalyzer.doJetId = cms.untracked.bool(False)

##################### Final Paths
process.reco_extra_jet    = cms.Path(process.iterativeConePu5CaloJets)
process.pat_step          = cms.Path(process.icPu5patSequence)
process.ana_step          = cms.Path(
                                      process.hcalNoise +
                                      process.icPu5JetAnalyzer +                                      
#                                       ( process.anaTrack ) +
                                      process.hiEvtAnalyzer
                                      )
##################### Customization
from CmsHi.JetAnalysis.customise_cfi import *
enableDataPat(process)
enableDataAnalyzers(process)


process.pcollisionEventSelection = cms.Path(process.collisionEventSelection)
process.pHBHENoiseFilter = cms.Path( process.HBHENoiseFilter )

process.load('CmsHi.HiHLTAlgos.hltanalysis_cff')
#process.hltanalysis.l1GtObjectMapRecord = cms.InputTag("hltL1GtObjectMap","","L1EmulRaw")
process.hltanalysis.l1GtReadoutRecord = cms.InputTag("simGtDigis","","L1EmulRaw")
process.hltanalysis.hltresults = cms.InputTag("TriggerResults","","HLT")
process.hltanalysis.l1GctHFRingSums = cms.InputTag("simGctDigis","","L1EmulRaw")
process.hltanalysis.l1GctHFBitCounts = cms.InputTag("simGctDigis","","L1EmulRaw")

process.hltAna = cms.Path(process.hltanalysis)
process.skimanalysis.hltresults = cms.InputTag("TriggerResults","",process.name_())
process.pAna = cms.EndPath(process.skimanalysis)
