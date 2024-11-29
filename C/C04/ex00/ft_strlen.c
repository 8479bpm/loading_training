#include <stdio.h>
int ft_strlen(char *str) {
    int index;
    index = 0;

    while(str[index] != '\0') {
        index ++;
    }
        return index;
}

int main(void) {
    char chaine[] = "Je ne sais pas combien je mesure";
    int longueurChaine = ft_strlen(chaine);
    printf("%d\n", longueurChaine);
}