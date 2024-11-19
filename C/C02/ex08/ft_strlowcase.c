#include <stdio.h>

char    *ft_strlowcase(char *str);

char    *ft_strlowcase(char *str) {
    int     index;

    index = 0;
    while(str[index] != '\0') {
        if (str[index] >= 'A' && str[index] <= 'Z') {
            str[index] = str[index] + ('a' - 'A');
        } 
            index++;
    }       return str;

}

int     main(void) {
    char   chaine1[] = "AbCdeFGHIJ" ;
    char   chaine2[] = "FRE45-fzf6" ;
    char   chaine3[] = "ABCDEFGHJI" ;

    printf("chaine1:%s\nchaine2:%s\nchaine3:%s\n", chaine1, chaine2, chaine3);

    ft_strlowcase(chaine1);
    ft_strlowcase(chaine2);
    ft_strlowcase(chaine3);

    printf("chaine1:%s\nchaine2:%s\nchaine3:%s\n", chaine1, chaine2, chaine3);
    return 0;
}