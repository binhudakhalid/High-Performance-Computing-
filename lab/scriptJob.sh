#!/bin/bash
#SBATCH -J "runJob c++"
#SBATCH -N 1
#SBATCH -t 00:30:00
#SBATCH -A hpc-lco-plessl
#SBATCH -p batch

module purge
module load DefaultModules
#module load compiler/GCC/9.3.0
module load intel

echo "submitting job to execute lab"
#run some program here
./hpc1