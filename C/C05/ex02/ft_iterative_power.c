#include <stdio.h>

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power) {
    int result = 1;
    int index = 0;

    if (power < 0) {
        return 0;
    }

    if (nb == 0 && power == 0) {
        return 1;
    }

    while(index < power) {
        result *= nb;
        index++;
    } 
    return result;
}

int main(void) {
    int nb1 = 6;
    int power1 = 3;
    int resultatAppel = ft_iterative_power(nb1, power1);

    printf("%d^%d = %d\n", nb1, power1, resultatAppel);  // Affiche "6^14 = 78364164096"
    return 0;
}