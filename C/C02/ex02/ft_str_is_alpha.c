#include <stdio.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str) {

    // Si la chaîne est vide, on renvoit 1 immédiatement
    if (str[0] == '\0') {
        return 1;
    }

    // on teste les types de char grâce aux codes ascii
    int index = 0; 
    // tant que la chaine n'est pas à la fin, faire:
    while (str[index] != '\0') 
    {
            // si un caractère n'est pas dans cette plage on retourne 0
            if (!((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z')))
        {
                return 0;
        }
                index ++;
    }   // si la boucle s'est executée en entier sans s'arrêter, on retourne 1
                return 1;
}

int main(void) {
    char chaine1[] = "je suis & une chaine de charactère piégée";
    char chaine2[] = "moi";
    int stockageRetourChaine1 = 0;
    int stockageRetourChaine2 = 0;

    stockageRetourChaine1 = ft_str_is_alpha(chaine1);
    stockageRetourChaine2 = ft_str_is_alpha(chaine2);

    printf("chaine1:%d, chaine2:%d", stockageRetourChaine1, stockageRetourChaine2);

    return 0;
}