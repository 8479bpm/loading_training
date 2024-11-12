#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void) {

int testA = 34;
int testB = 4656;

printf("testA: %d\n, testB: %d\n", testA, testB);

ft_ultimate_div_mod(&testA, &testB);

printf("testA: %d\n, testB: %d\n", testA, testB);

    return 0;
}


void ft_ultimate_div_mod(int *a, int *b) {
    int div = (*a)/(*b);
    int mod = (*a)%(*b);

    *a = div;  // Met le quotient dans *a
    *b = mod;  // Met le reste dans *b
}