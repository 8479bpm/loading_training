#include <stdio.h>

int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power) {
    // Cas où la puissance est inférieure à 0
    if (power < 0) {
        return 0;
    }

    // Cas particulier 0^0, défini comme 1 ici
    if (power == 0) {
        return 1;
    }

    // Cas général : multiplication récursive
    return nb * ft_recursive_power(nb, power - 1);
}

int main(void) {
    int nb1 = 6;
    int power1 = 3;
    int resultatAppel = ft_recursive_power(nb1, power1);

    // Affichage du résultat : 6^3 = 216
    printf("%d^%d = %d\n", nb1, power1, resultatAppel);
    return 0;
}
