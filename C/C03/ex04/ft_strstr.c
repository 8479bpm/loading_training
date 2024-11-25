#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

char *ft_strstr(char *str, char *to_find) {
    unsigned int index = 0;

    if(to_find[index] == '\0') {
        return str;
    } else if (str[index] == '\0') {
        return NULL;
    }

    while (str[index] != '\0') {
        if(str[index] != to_find[index]) {
            index++;
        }
        return str;
    }
    


int main(void) {
    char chaine1[] = "salut tout le monde";
    char chaine2[] = "tout";
    char chaineTrouvée[200] = ft_strstr(chaine1, chaine2);
    printf("Trouvé:%s\n", chaineTrouvée);
    return 0; 
}

}