/*
This program solves the equations for the quantum harmonic oscillator
    Created by: Enrique Hurtado
    Date: 06 June 2021
    Latest update: 06 June 2021
    History:
        Date: 06/06/21 || Mod: Program written || By: Enrique Hurtado
    Purpose: N/A
    Notes: N/A
*/
#include <iostream>
#include "my_lib.h"
using namespace std;

int main()
{
    double x;
    ofstream file_name;
    file_name.open("test.dat");
    for (int i = -10000; i <= 10000; i++) {
        x = i*0.001;
        file_name << x <<' '<< psi(x,0) << "\n";
    }
    file_name.close();
    return 0;
}