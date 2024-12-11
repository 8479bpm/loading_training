#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max) {
    if (min >= max) {
        *range = NULL;  // Assigne NULL à ce que pointe 'range'
        return 0;       // Retourne 0, car il n'y a pas de tableau à créer
    }

    int tailleTab = max - min;
    *range = malloc(tailleTab * sizeof(int)); // Crée le tableau et assigne l'adresse à *range

    if (*range == NULL) {
        return -1;  // Erreur si malloc échoue
    }

    int index = 0;
    while (min < max) {
        (*range)[index] = min;  // Remplir le tableau avec les valeurs de min à max-1
        min++;
        index++;
    }

    return tailleTab; // Retourne la taille du tableau
}






int main(void) {
    int *range;
    int size = ft_ultimate_range(&range, 3, 7);

    // Vérification des résultats
    if (range != NULL) {
        printf("Tableau de taille %d : ", size);
        for (int i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);  // N'oublie pas de libérer la mémoire allouée
    } else {
        printf("Aucun tableau n'a été créé.\n");
    }

    return 0;
}
