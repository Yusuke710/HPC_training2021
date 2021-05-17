#!/bin/bash
#SBATCH --job-name=MyParallelJob
#SBATCH --time=0:05:00
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=10
#SBATCH --partition=m3f

gcc -fopenmp -o hello hello.c
./hello


