#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);

int main(void) {

    // ne pas mettre le charactère '/n' sinon il sera compté par la fonction
    char *test1 = "je suis un test.";
    char *test2 = "et moi aussi mais je suis beaucoup beaucoup plus long.";

    // on est obligé de capturer le retour de la fonction ft_strlen dans une varible pour pouvoir l'afficher et le contrôler
    int testA = ft_strlen(test1);
    printf("Je mesure: %d \n", testA);
    int testB = ft_strlen(test2);
    printf("Je mesure: %d\n", testB);
    
    return 0;
}

int ft_strlen(char *str) {
    int compteur = 0;
    int index = 0;
    while (str[index] != '\0') {
            compteur++;
            index++;
    }
    return compteur;
} 
