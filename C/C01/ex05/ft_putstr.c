#include <unistd.h>

void ft_putstr(char *str);
int longueurString(char *str);


int main(void) {
    char *testAffichage = "Je suis un test";
    ft_putstr(testAffichage);
}


int longueurString(char *str) {
    int compteur = 0;
    int index = 0;

    while (str[index] != '\0') {
        compteur ++;
        index++;
    }

    return compteur;
}

void ft_putstr(char *str) {

    write(1, str, longueurString(str));

}

