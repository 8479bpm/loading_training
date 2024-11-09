#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void) {
    int y = 43;
    int z = 23;
    
    // Before the operation, print the values of y and z
    printf("Before division and modulo: y = %d, z = %d\n", y, z);

    ft_ultimate_div_mod(&y, &z);

    // After the operation, print the updated values of y and z
    printf("After division and modulo: y = %d, z = %d\n", y, z);

    return 0;
}

void ft_ultimate_div_mod(int *a, int *b) {
    if (*b == 0) {
        printf("Error: Division by zero!\n");
        return;  // Exit the function if b is 0
    }
    
    int tempA = *a;
    int tempB = *b; // si on ne stocke pas dans des variables temps, la valeur de a et b aura changé pour les calculs
    *a = (tempA) / (tempB);  // Division
    *b = (tempA) % (tempB);  // Modulo
}
