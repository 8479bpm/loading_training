#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void) {

    int nombreA = 45;
    int nombreB = 67;

    printf("NombreA : %d, NombreB : %d", nombreA, nombreB);
    ft_swap(&nombreA, &nombreB);
    printf("NombreA : %d, NombreB : %d", nombreA, nombreB);
    return 0;

}

void ft_swap(int *a, int *b) {

    int temp = 0; 

    temp = *b;
    *b = *a;
    *a = temp;

}