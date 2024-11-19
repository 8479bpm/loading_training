#include <stdio.h>

char    *ft_strupcase(char *str);

char    *ft_strupcase(char *str) {
    int     index;

    index = 0;
    while (str[index] != '\0') {
        if(str[index] >= 'a' && str[index] <= 'z') {
            // on aurait pu l'écrire ainsi str[index] = str[index] - 'a' + 'A'; (diff de 32 également mais plus explicite avec les lettres)
            str[index] = (str[index] - 32);
        } 
            index++;
    }
            return str;
}

int     main(void) {
    char   chaine1[] = "AbCdeFGHIJ" ;
    char   chaine2[] = "FRE45-fzf6" ;
    char   chaine3[] = "abcdefghijklmnopqrstuvwxyz" ;

    printf("chaine1: %s\n chaine2:%s\n chaine3:%s\n", chaine1, chaine2, chaine3);

    ft_strupcase(chaine1);
    ft_strupcase(chaine2);
    ft_strupcase(chaine3);

    printf("chaine1: %s\n chaine2:%s\n chaine3:%s\n", chaine1, chaine2, chaine3);
    return 0;
}