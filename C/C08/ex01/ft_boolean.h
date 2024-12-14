#ifndef FT_BOOLEAN_H  
#define FT_BOOLEAN_H 

// Définition des valeurs booléennes
#define TRUE 1
#define FALSE 0

// Macro pour vérifier si un nombre est pair
#define EVEN(nbr) (nbr % 2 == 0)

// Définition du type booléen comme int
#define t_bool int

// Messages à afficher en fonction de la parité du nombre d'arguments
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

// Code de sortie de succès
#define SUCCESS 0

// Prototypes des fonctions
void ft_putstr(char *str);
t_bool ft_is_even(int nbr);

#endif
