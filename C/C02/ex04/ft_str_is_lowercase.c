#include <stdio.h>

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str) {
    if (str[0] == '\0') {
        return 1;
    }
    
    int index = 0;
    while(str[index] != '\0') {
        if (!(str[index] >= 'a' && str[index] <= 'z')) {
            // printf("valeur str[index] '%c' \n", str[index]); test pour vérifier le comportement inhabituel
            return 0;
        }
            index++;
    }
            return 1;
}


int main(void) {
    char chaine1[] = "je suis65";
    char chaine2[] = "SSSSSS";
    int captureRetourString1 = ft_str_is_lowercase(chaine1);
    int captureRetourString2 = ft_str_is_lowercase(chaine2);
    
    printf("Chaine1:%d, Chaine2:%d\n", captureRetourString1, captureRetourString2);

    return 0;
}
