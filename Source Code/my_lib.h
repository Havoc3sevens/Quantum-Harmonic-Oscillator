/*
This header file contains custom functions needed to
    run the program correctly.
    Created by: Enrique Hurtado
    Date: 07 June 2021
    Latest update: 07 June 2021
    History:
        Date: 06/07/21 || Mod: Program written || By: Enrique Hurtado
        Date: 06/07/21 || Mod: Added factorial || By: Enrique Hurtado
*/

int factrl(int n) {
    int x = (n == 0) ? 0: 1;
    for (int i = n; i >= 1; i--) {
        x = x*i;
    }
    return x;
}
