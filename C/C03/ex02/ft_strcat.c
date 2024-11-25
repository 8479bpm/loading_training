#include <stdio.h>
char *ft_strcat(char *dest, char *src);

char *ft_strcat(char *dest, char *src) {
    int index = 0;
    // parcourir la chaine dest pour trouver sa fin
    while(dest[index] !='\0') {
        index++;
    }
    // copie des caractères de src dans dest, à partir de l'index de fin de dest
    int index2 = 0;
    while(src[index2] != '\0') {
        dest[index] = src[index2]; // Ajouter le caractère de src dans dest
        index++; // Incrémenter l'index de dest
        index2++; // Incrémenter l'index de src
    }

        dest[index] = '\0'; // Ajouter le caractère nul à la fin de la chaîne concaténée
        return dest; // Retourner la chaîne dest modifiée
    
}

int main() {
    char dest[50] = "Hello, ";
    char *src = "world!";
    char dest2[50] = "Je suis une string ";
    char *src2 = "concaténée.";
    
    printf("Avant strcat: %s\n", dest);
    printf("Avant strcat2: %s\n", dest2);
    ft_strcat(dest, src);
    ft_strcat(dest2, src2);
    printf("Après strcat: %s\n", dest);  // Devrait afficher "Hello, world!"
    printf("Après strcat2: %s\n", dest2);  // Devrait afficher "Hello, world!"
    
    return 0;
}