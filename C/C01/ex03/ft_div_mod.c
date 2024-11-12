#include <stdio.h> 

void ft_div_mod(int a, int b, int *div, int *mod);


int main(void) {

    int nombreA = 2;
    int nombreB = 4;
    int division = 0;
    int modulo = 0;

    printf("Nombre A: %d, nombre B: %d, division: %d, modulo: %d", nombreA, nombreB, division, modulo);

    ft_div_mod(nombreA, nombreB, &division, &modulo);

    printf("Nombre A: %d, nombre B: %d, division: %d, modulo: %d", nombreA, nombreB, division, modulo);

    return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod) {

    *div = a/b;
    *mod = a%b; 

}