#include <unistd.h>
void ft_putstr(char *str);
int longueur(char *chaine); 

// on doit écrirer une fonction pour récupérer la valeur à mettre dans la taille de la chaine
void ft_putstr(char *str) {
write(1, str, longueur(str));
}

// Fonction pour calculer la longueur de la chaîne
int longueur(char *chaine) {
    int index = 0;
    while (chaine[index] != '\0') { // On parcourt la chaîne jusqu'à '\0' 
        index++;
    }
    return index;
}