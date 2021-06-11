/*
This program solves the equations for the quantum harmonic oscillator
    Created by: Enrique Hurtado
    Date: 06 June 2021
    Latest update: 06 June 2021
    History:
        Date: 06/06/21 || Mod: Program written || By: Enrique Hurtado
        Date: 06/11/21 || Mod: Added psi_n_to_file || By: Enrique Hurtado
    Purpose: N/A
    Notes: N/A
*/
#include "my_lib.h"
using namespace std;

int psi_n_to_file(int neg_lim, int pos_lim, int n);

int main()
{
    double x;
    for (int i = 0; i <= 9; i++) {
        psi_n_to_file(-10, 10, i);   
    }
    return 0;
}

int psi_n_to_file(int neg_lim, int pos_lim, int n) {
    double x;
    ofstream OutputFile(filename + "_" + to_string(n)+ ".dat");
    for (int i = neg_lim*1000; i <= pos_lim*1000; i++) {
        x = i*0.001;
        OutputFile << x <<' '<< psi(x,n) << "\n";
    }
    OutputFile.close();
    return 0;
}