#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {
    int i = 0;               // Indice au début du tableau
    int j = size - 1;        // Indice à la fin du tableau
    int temp;                // Variable temporaire pour l'échange

    // Boucle while pour inverser les éléments
    while (i < j) {
        // Échanger tab[i] et tab[j]
        temp = tab[i];      // Sauvegarder l'élément à l'indice i
        tab[i] = tab[j];    // Mettre l'élément à l'indice j dans tab[i]
        tab[j] = temp;      // Mettre l'élément sauvegardé dans tab[j]
        
        // Déplacer les indices
        i++;                // Avancer l'indice i (vers la droite)
        j--;                // Reculer l'indice j (vers la gauche)
    }
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Afficher avant l'inversion
    printf("Avant inversion : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Appeler la fonction d'inversion
    ft_rev_int_tab(tab, size);

    // Afficher après l'inversion
    printf("Après inversion : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
