#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b) {
    
    int temp = *b;
    *b = *a;
    *a = temp;

}