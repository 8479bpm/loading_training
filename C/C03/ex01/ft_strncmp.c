#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int ft_strncmp(char *s1, char *s2, unsigned int n) {
        int index = 0;

        while(index < n && s1[index] != '\0' && s2[index] != '\0') {
        if(s1[index] != s2[index]) {
            return (unsigned char)s1[index] - (unsigned char)s2[index];
        }
           
            index++;
    }
            return (unsigned char)s1[index] - (unsigned char)[index];
}

int main(void) {
    char chaine1[] = "hellyo";
    char chaine2[] = "hellat";
    int resultat = ft_strncmp(chaine1, chaine2, 5);
    printf("la comparaison des 2 chaines donne:%d\n", resultat);
}