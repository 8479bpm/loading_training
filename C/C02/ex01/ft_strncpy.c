#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int index = 0;
    
    // Copier les n premiers caractères de src vers dest
    while (index < n && src[index] != '\0') {
        dest[index] = src[index];
        index++; 
    }

    // Si la source est plus courte que n, remplir dest avec des '\0'
    while (index < n) {
        dest[index] = '\0';
        index++;
    }

    return dest;
}

int main(void) {
    char chaine1[40] = "première string";
    char *chaine2 = "Je suis la string à copier";
    printf("1: %s, 2: %s\n", chaine1, chaine2);

    // Copier les 10 premiers caractères de chaine2 dans chaine1
    ft_strncpy(chaine1, chaine2, 10);
    printf("1: %s, 2: %s\n", chaine1, chaine2);

    // Test avec une chaîne source plus longue que la taille de destination
    char chaine3[30];  // Taille suffisante pour contenir la chaîne
    char *chaine4 = "je suis une chaine source et je suis super longue";
    
    // Copier les 50 premiers caractères (plus grands que la taille de chaine3)
    ft_strncpy(chaine3, chaine4, 50);  
    printf("1: %s, 2: %s\n", chaine3, chaine4);

    return 0;
}
