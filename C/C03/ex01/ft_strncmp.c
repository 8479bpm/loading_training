#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int index = 0;

    // Comparer jusqu'à n caractères ou jusqu'à une différence ou fin de chaîne
    while (index < n && s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index]) {
        index++;
    }

    // Si on a atteint n caractères ou une différence, retourner la différence des caractères
    if (index < n) {
        return (unsigned char)s1[index] - (unsigned char)s2[index];
    }

    // Si on n'a pas trouvé de différence avant n caractères, retourner 0 (elles sont égales)
    return 0;
}

int main(void) {
    char chaine1[] = "Hello";
    char chaine2[] = "Hello, world";

    // Comparer les 3 premiers caractères
    int captureC1 = ft_strncmp(chaine1, chaine2, 3);
    // Comparer les 8 premiers caractères
    int captureC2 = ft_strncmp(chaine2, chaine1, 8);

    // Affichage des résultats
    printf("Retour fonction (3 premiers caractères): %d\n", captureC1);
    printf("Retour fonction (8 premiers caractères): %d\n", captureC2);

    return 0;
}
