/*
This header file contains custom functions needed to
    run the program correctly.
    Created by: Enrique Hurtado
    Date: 07 June 2021
    Latest update: 07 June 2021
    History:
        Date: 06/07/21 || Mod: Program written || By: Enrique Hurtado
        Date: 06/07/21 || Mod: Added factorial || By: Enrique Hurtado
        Date: 06/07/21 || Mod: Added psi function || By: Enrique Hurtado
*/

#include "setup.h"

int factrl(int n) {
    int x = (n == 0) ? 0: 1;
    for (int i = n; i >= 1; i--) {
        x = x*i;
    }
    return x;
}

double psi(double x,int n) {
    double psi_n[n];
    double x_t = sqrt(m*w/h)*x;
    
    psi_n[0] = pow((m*w)/(pi*h),1.0/4.0)*exp(-0.5*x_t*x_t);

    if (n == 0) {
        return psi_n[n];
    } else if (n == 1) {
        psi_n[n] = x_t*sqrt(1.0/n)*psi_n[0];
        return psi_n[n]; 
    } else {
        psi_n[1] = x_t*sqrt(2.0/1.0)*psi_n[0];
        for (int i = 2; i <= n; i++) {
            psi_n[i] = x_t*sqrt(2.0/i)*psi_n[i-1] - sqrt((i-1.0)/i)*psi_n[i-2];
        }
        return psi_n[n];
    }

}
