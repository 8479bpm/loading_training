#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb); 


char *ft_strncat(char *dest, char *src, unsigned int nb) {
    int index = 0;
    // parcourir la chaine dest pour trouver sa fin
    while(dest[index] !='\0') {
        index++;
    }
    // copie des caractères de src dans dest, à partir de l'index de fin de dest
    int index2 = 0;
    while(index2 < nb && src[index2] != '\0') {
        dest[index] = src[index2]; // Ajouter le caractère de src dans dest
        index++; // Incrémenter l'index de dest
        index2++; // Incrémenter l'index de src
    }

        dest[index] = '\0'; // Ajouter le caractère nul à la fin de la chaîne concaténée
        return dest; // Retourner la chaîne dest modifiée
    
}







int main(void) {
    char chaine1[50] = "Je";  // S'assurer que la chaîne est assez grande
    char chaine2[] = "suis une chaine concaténée.";

    // Concaténer les 3 premiers caractères de chaine2 à chaine1
    ft_strncat(chaine1, chaine2, 9);

    // Affichage des résultats
    printf("Copie de n car de src vers dest: %s\n", chaine1);  


    return 0;
}