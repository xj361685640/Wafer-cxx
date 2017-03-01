/*

   outputroutines.hpp

   Copyright (c) Michael Strickland
   Forked at v2.0; Additions by Tim DuBois

   GNU General Public License (GPLv3)
   See detailed text in license directory

*/

#ifndef __outputroutines_hpp__
#define __outputroutines_hpp__

#include <iostream>
#include <fstream>

const int dwidth = 25;

void outputMeasurements(double time, dcomp laste);
void outputSnapshot(dcomp ***wfnc, char* label);
void outputWavefunction(dcomp ***wfnc, char* label);
void outputWavefunctionBinary(dcomp ***wfnc, char* label);
void outputSummaryData(int WAVENUM);
void outputPotential(char* label);
void outputPotentialBinary(char* label);
void dumpPotential();
void print_line();

// output files
extern std::fstream energy_out;

#endif /* __outputroutines_hpp__ */
