#include <stdio.h>

char* ft_strcapitalize(char *str) {
    int index = 0;
    int isNewWord = 1; // 1 = début de mot, 0 = mot en cours

    while (str[index] != '\0') {  // Parcours de la chaîne
        // Vérifier si c'est le début d'un mot (lettre ou chiffre)
        if (isNewWord && (
            (str[index] >= 'a' && str[index] <= 'z') ||   // Lettre minuscule
            (str[index] >= 'A' && str[index] <= 'Z') ||   // Lettre majuscule
            (str[index] >= '0' && str[index] <= '9'))) {  // Chiffre

            // Si c'est une lettre minuscule, la mettre en majuscule
            if (str[index] >= 'a' && str[index] <= 'z') {
                str[index] = str[index] - 'a' + 'A';  // Conversion en majuscule
            }

            // Une fois qu'on a traité le début du mot, on met isNewWord à 0
            isNewWord = 0;
        } else {
            // Si c'est une lettre majuscule, la mettre en minuscule
            if (str[index] >= 'A' && str[index] <= 'Z') {
                str[index] = str[index] + 'a' - 'A';  // Conversion en minuscule
            }
        }

        // Si on rencontre un caractère non alphanumérique, c'est la fin d'un mot
        if (!((str[index] >= 'a' && str[index] <= 'z') || 
              (str[index] >= 'A' && str[index] <= 'Z') || 
              (str[index] >= '0' && str[index] <= '9'))) {
            isNewWord = 1;  // Le prochain caractère alphanumérique sera un nouveau mot
        }

        index++;  // Passer au caractère suivant
    }

    return str;
}

int main(void) {
    char chaine1[] = "Je suis une chaine de caractères";
    char chaine2[] = "MOI AUSSI 42 4244 !!!!!";

    // Afficher les chaînes avant modification
    printf("Avant : C1:%s, C2:%s\n", chaine1, chaine2);

    // Appliquer la fonction ft_strcapitalize
    ft_strcapitalize(chaine1);
    ft_strcapitalize(chaine2);

    // Afficher les chaînes après modification
    printf("Après : C1:%s, C2:%s\n", chaine1, chaine2);

    return 0;
}
