#include <stdio.h>

int ft_strlen(char *str);

int main(void) {
    char *test = "Salut je suis un test";
    int length = ft_strlen(test);
    printf("La longueur de la chaîne est : %d\n", length);
    return 0;
}

int ft_strlen(char *str) {
    int compteur = 0;
    
    // Parcours de la chaîne jusqu'à atteindre le caractère nul '\0'
    while (*str != '\0') {
        compteur++;  // Incrémente compteur pour chaque caractère
        str++;       // Passe au caractère suivant
    }
    
    return compteur;
}
