#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size) {
    unsigned int     index;
    unsigned int     length;

    index = 0;
    length = 0;

    // calcul de la longueur de la chaine source
        while(src[length] != '\0') {
            length++;
        }
    
    // si size = 0, on retourne la longeur de src sans rien copier
        if (size == 0) {
            return length;
        }

    // copier les caractères de src vers dest jusqu'à size - 1
        while(src[index] != '\0' && index < size -1) {
            dest[index] = src[index];
            index++;
        }
    // ajouter un caractère null à la fin de dest 
        dest[index] = '\0';

    // retourner la longeur totale de src    
        return length;

}




int     main(void) {
        char src[] = "Hello, World!";
        char dest[20];

        unsigned int len = ft_strlcpy(dest, src, 10);
    
        printf("Dest: %s\n", dest);
        printf("Longueur totale de src: %u\n", len);
    
        return 0;
}