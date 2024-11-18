#include <stdio.h>
int ft_str_is_uppercase(char *str);

int ft_str_is_uppercase(char *str) {
    if (str[0] == '\0') {
        return 1;
    }

   int index = 0;
    while(str[index] != '\0') {
        if (!(str[index] >= 'A' && str[index] <= 'Z')) {
            
            return 0;
        }
            index++;
    }
            return 1;
}

int main(void) {
    char chaine1[] = "RRRRRRRR";
    char chaine2[] = "shfufjiogte";
    char chaine3[] = "Grehtrhfdh";
    char chaine4[] = "";
    int captureRetourChaine1 = 0;
    int captureRetourChaine2 = 0;
    int captureRetourChaine3 = 0;
    int captureRetourChaine4 = 0;

    captureRetourChaine1 = ft_str_is_uppercase(chaine1);
    captureRetourChaine2 = ft_str_is_uppercase(chaine2);
    captureRetourChaine3 = ft_str_is_uppercase(chaine3);
    captureRetourChaine4 = ft_str_is_uppercase(chaine4);

    printf("Chaine1:%d, chaine2:%d, chaine3:%d, chaine4:%d\n", captureRetourChaine1, captureRetourChaine2, captureRetourChaine3, captureRetourChaine4);


    return 0;
}