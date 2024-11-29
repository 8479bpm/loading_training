#include <stdio.h>

int ft_recursive_factorial(int nb) {
    if (nb < 0) {
        return 0;  // Si nb est négatif, la factorielle n'est pas définie, on retourne 0
    }
    if (nb == 0 || nb == 1) {
        return 1;  // Cas de base : 0! = 1 et 1! = 1
    }
    return nb * ft_recursive_factorial(nb - 1);  // Appel récursif pour (nb-1)!
}

int main(void) {
    int test1 = 0;
    int test2 = 1;
    int test3 = 5;
    int test4 = -3;

    printf("Factorielle de %d = %d\n", test1, ft_recursive_factorial(test1));  // Devrait afficher 1
    printf("Factorielle de %d = %d\n", test2, ft_recursive_factorial(test2));  // Devrait afficher 1
    printf("Factorielle de %d = %d\n", test3, ft_recursive_factorial(test3));  // Devrait afficher 120
    printf("Factorielle de %d = %d\n", test4, ft_recursive_factorial(test4));  // Devrait afficher 0

    return 0;
}
