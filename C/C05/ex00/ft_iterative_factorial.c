#include <stdio.h>

/* int ft_iterative_factorial(int nb) {
    if (nb < 0) {
        return 0;  // Si nb est négatif, on renvoie 0
    }
    
    int fac = 1;
    int index = 2;

    // Boucle de calcul de la factorielle
    while (index <= nb) {  // Remarque : on inclut nb dans le calcul
        fac *= index;  // Multiplie fac par index
        index++;
    }

    return fac;
}



 */








int ft_iterative_factorial(int nb) {
    int resultat = 1;
    int index = 1;

    if (nb < 0) {
        return 0;
    }

    while (index <= nb) {
        resultat *= index;
        index++;
    }
        return resultat;
}    




int main(void) {
    int test1 = 0;  // Test avec 0, la factorielle de 0 est 1
    int test2 = 1;  // Test avec 1, la factorielle de 1 est 1
    int test3 = 5;  // Test avec 5, la factorielle de 5 est 120
    int test4 = -3; // Test avec un nombre négatif, doit renvoyer 0

    printf("Factorielle de %d = %d\n", test1, ft_iterative_factorial(test1));  // Devrait afficher 1
    printf("Factorielle de %d = %d\n", test2, ft_iterative_factorial(test2));  // Devrait afficher 1
    printf("Factorielle de %d = %d\n", test3, ft_iterative_factorial(test3));  // Devrait afficher 120
    printf("Factorielle de %d = %d\n", test4, ft_iterative_factorial(test4));  // Devrait afficher 0

    return 0;
}
