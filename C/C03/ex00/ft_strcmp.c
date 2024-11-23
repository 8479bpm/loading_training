#include <stdio.h>
int     ft_strcmp(char *s1, char *s2);

int     ft_strcmp(char *s1, char *s2) {
    int index;

    index= 0;

    while (s1[index] != '\0' && s2[index] != '\0') {
        if (s1[index] != s2[index]) {
            return (unsigned char)s1[index] - (unsigned char)s2[index];
            
        }
        index++;
    }
    return (unsigned char)s1[index] - (unsigned char)s2[index];
}

/* 
Avec des pointeurs
int ft_strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
} */

int main(void) {
    char chaine1[] = "Hello";
    char chaine2[] = "Hello, World";
    char chaine3[] = "Hello";
    int appel1;
    int appel2;
    int appel3;

    appel1 = ft_strcmp(chaine1, chaine2);
    appel2 = ft_strcmp(chaine2, chaine1);
    appel3 = ft_strcmp(chaine3, chaine1);

    printf("Appel1:%d, appel2:%d, appel3:%d", appel1, appel2, appel3);

    
    return 0;
}

