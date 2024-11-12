#include <unistd.h>
void ft_putstr(char *str);
int longueur(char *chaine); 

int main(void) {
    char * test = "je suis un test\n";
    char * test2 = "i'm blue dabideedabada\n";
    ft_putstr(test);
    ft_putstr(test2);
    return 0;
}

// on doit écrirer une fonction pour récupérer la valeur à mettre dans la taille de la chaine
write(1, str, longueur(str));
}

// Fonction pour calculer la longueur de la chaîne
int longueur(char *chaine) {
    int compteur = 0;
    int index = 0;
    while (chaine[index] != '\0') { // On parcourt la chaîne jusqu'à '\0'
        compteur++; 
        index++;
    }
    return compteur;
}