#!/bin/sh
nohup root -l -b -X test/macro5region.C+ > region.out &
nohup root -l -b -X test/macro5tower.C+ > tower.out &
