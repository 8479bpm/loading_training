#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void) {
    int nombre = 2345;

    // Création de pointeurs imbriqués jusqu'à 9 niveaux
    int *p1 = &nombre;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;

    // Avant modification
    printf("Avant : %d\n", nombre);

    // Appel de la fonction avec un pointeur de 9 niveaux
    ft_ultimate_ft(p9);

    // Après modification
    printf("Après : %d\n", nombre);

    return 0;
}

void ft_ultimate_ft(int *********nbr) {
    // Le dernier niveau de déréférencement permet de modifier la valeur
    *********nbr = 42;
}
