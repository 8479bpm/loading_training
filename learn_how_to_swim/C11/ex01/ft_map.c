#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*result;
	int index;

	index = 0;
	result = malloc(length * sizeof(int)); 
	if (result == NULL)
		return NULL;
	while (index < length)
	{
		result[index] = f(tab[index]);
		index++;
	}
	return result;
}

/* exemple */ 
int ft_double(int n)
{
    return n * 2;
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5};  // Tableau d'entrée
    int length = 5;  // Longueur du tableau
	// Appliquer ft_double à chaque élément du tableau tab
    int *result = ft_map(tab, length, &ft_double);
	int index;

	index = 0;

    // Afficher les résultats
    if (result != NULL)  // Vérifier que malloc a réussi
    {
        while (index < length)
        {
            printf("%d ", result[index]);  // Afficher chaque élément du tableau résultant
			index++;
        }
        printf("\n");

        // Libérer la mémoire allouée pour result
        free(result);
    }
    else
    {
        printf("Erreur d'allocation mémoire.\n");
    }
    return 0;
}
