#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2) {
    int index = 0;
    while(s1[index] != '\0' && s2[index] != '\0') {
        if(s1[index] != s2[index]) {
            return (unsigned char)s1[index] - s2[index];
        }
           
            index++;
    }
            return (unsigned char)s1[index] - s2[index];
}


int main(void) {
    char chaine1[] = "patate";
    char chaine2[] = "fraise";
    int resultat = ft_strcmp(chaine1, chaine2);
    printf("la comparaison des 2 chaines donne:%d\n", resultat);
}