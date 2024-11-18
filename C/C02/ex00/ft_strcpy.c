#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void) {
    char phrase1[50] = "je suis un test";
    char phrase2[0] = " moi aussi";

    printf("phrase1: %s, phrase2: %s", phrase1, phrase2);

    ft_strcpy(phrase1, phrase2);

    printf("phrase1: %s, phrase2: %s", phrase1, phrase2);

    return 0;
}

/* char *ft_strcpy(char *dest, char *src) {
    while(*src != '\0') {
        *dest = *src;
        src++;
        dest++; // dest += 1

    }
    return dest;
}



autre 



char *ft_strcpy(char *dest, const char *src) {
    char *d = dest;  // On garde une copie du pointeur original de `dest`
    
    // On copie chaque caractère de `src` dans `dest` jusqu'à la fin de la chaîne
    while (*src != '\0') {
        *d = *src;  // On copie le caractère de src dans dest
        d++;         // On déplace le pointeur `d` pour le prochain caractère
        src++;       // On déplace le pointeur `src` pour le prochain caractère
    }
    
    *d = '\0';  // On termine la chaîne de caractères dans `dest`
    
    // On retourne le pointeur original `dest`, pas le pointeur déplacé `d`
    return dest;
}

 */

char *ft_strcpy(char *dest, char *src)
{
    // dest 100 0 0 0 0 0 0 
    // src 400 h e l l o \0 
    // hello 
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // *(dest + i)
    return dest;
}

/* *src : Cela signifie déréférencer le pointeur src. 
C'est-à-dire qu'on accède au valeur de l'élément pointé par src (ici, un caractère dans une chaîne).
src++ : Cela signifie déplacer le pointeur src vers le prochain élément dans la mémoire. 
En d'autres termes, après src++, src pointera sur l'adresse mémoire suivante. 
Cet opérateur effectue le déplacement après avoir retourné l'ancienne valeur de src. */
