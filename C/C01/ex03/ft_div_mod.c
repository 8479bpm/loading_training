#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);


int main(void) {

    

    int num1 = 4;
    int num2 = 2;
    int divResult = 0;
    int modResult = 0;
    printf(" num1 %d, num2 %d, divResult %d, modResult %d", num1, num2, divResult, modResult);


    

    ft_div_mod(num1, num2, &divResult, &modResult);
    printf(" num1 %d, num2 %d, divResult %d, modResult %d", num1, num2, divResult, modResult);
    return 0;
}


void ft_div_mod(int a, int b, int *div, int *mod) {


    *div = (a/b);
    *mod = (a%b);
}