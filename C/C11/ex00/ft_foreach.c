#include <stdio.h>

void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int    index;

    index = 0;
    while(index < length) 
    {
        f(tab[index]);
        index++;
    }
}

void ft_putnbr(int n) {
    printf("%d\n", n);  // Affiche le nombre suivi d'un retour à la ligne
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};  // Exemple de tableau d'entiers
    int length = sizeof(tab) / sizeof(tab[0]);  // Calcul de la longueur du tableau
    ft_foreach(tab, length, &ft_putnbr);  // Appel de ft_foreach pour afficher tous les éléments du tableau
    return 0;
}