#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);

//exercice0
char *ft_strcpy(char *dest, char *src) {
    int index = 0;
    while(src[index] != '\0') {
            dest[index] = src[index];
            index++;
    }
    dest[index] = '\0';
    return dest;
}

//exercice1
char *ft_strncpy(char *dest, char *src, unsigned int n) {
    int index = 0;
    while(index < n && src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }

    while(index < n) {
        dest[index] = '\0';
        index++;
    }
    return dest;
}


int main(void) {
    printf("exercice0\n");
    char chaine1[40];
    char chaine2[] = "Je suis la chaine à copier";
    printf("String1:%s, String2:%s\n", chaine1, chaine2);

    ft_strcpy(chaine1, chaine2);
    printf("String1:%s, String2:%s\n", chaine1, chaine2);

    printf("exercice1\n");
    char chaine3[40];
    char chaine4[] = "Je suis la prochaine chaine à copier";
    printf("String3:%s, String4:%s\n", chaine3, chaine4);

    ft_strncpy(chaine3, chaine4, 20);
    printf("String3:%s, String4:%s\n", chaine3, chaine4);

    return 0;
}

