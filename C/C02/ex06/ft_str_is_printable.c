#include <stdio.h>

int ft_str_is_printable(char *str);

int ft_str_is_printable(char *str) {
    if (str[0] == '\0') {
        return 1;
    }

    int index = 0;
    while(str[index] != '\0')
    {
        if(!(str[index] >= 32 && str[index] <= 126)) {
            return 0;
        }
        index++;
    } 
    return 1;
}

int main(void) {
char chaine1[] = "";
char chaine2[] = "blip54___";
// chaine2[3] = 10; code ASCII 10 pour tester une caractère non impimable en dessous de 32

int captureRetourString1 = ft_str_is_printable(chaine1);
int captureRetourString2 = ft_str_is_printable(chaine2);

    
    printf("Chaine1:%d, Chaine2:%d\n", captureRetourString1, captureRetourString2);

    return 0;
}