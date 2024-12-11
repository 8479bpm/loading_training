#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max) {
    if(min >= max) {
        return NULL;
    }

    int tabSize = max - min;
    int* dynamicTab = malloc(tabSize * sizeof(int));
    int index = 0;

    if(dynamicTab == NULL) {
        return NULL;
    }

    while(index < max) {
        dynamicTab[index] = min + index;
        index ++;
    }

    return dynamicTab;

}

int main(void) {

    int* tab1 = ft_range(1, 14);
    int* tab2 = ft_range(4, 2);
    int* tab3 = ft_range(-4, -2);
    int* tab4 = ft_range(-3, 7);

    if (tab1 != NULL) {
        printf("Voici le premier tableau: ");
        for (int i = 0; i < 14 - 1; i++) {
            printf("%d ", tab1[i]);
        }
        printf("\n");
        free(tab1); // Libération de la mémoire
    }

    if (tab2 == NULL) {
        printf("Le tableau 2 est NULL (min >= max)\n");
    }

    if (tab3 != NULL) {
        printf("Voici le troisième tableau: ");
        for (int i = 0; i < -2 - (-4); i++) {
            printf("%d ", tab3[i]);
        }
        printf("\n");
        free(tab3); // Libération de la mémoire
    }

    if (tab4 != NULL) {
        printf("Voici le quatrième tableau: ");
        for (int i = 0; i < 7 - (-3); i++) {
            printf("%d ", tab4[i]);
        }
        printf("\n");
        free(tab4); // Libération de la mémoire
    }

    return 0;



}

