#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void) {

    int nombreA = 43;
    int nombreB = 2345435;

    printf("Le nombre A est: %d et le nombre b est %d", nombreA, nombreB);

    ft_swap(&nombreA, &nombreB);

     printf("Le nombre A est: %d et le nombre b est %d", nombreA, nombreB);

    return 0;
}



void ft_swap(int *a, int *b) {
    
    int temp = *b;
    *b = *a;
    *a = temp;

}