#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);
char *ft_strdup(char *src);
char *ft_strcpy(char *dest, char *src);

int ft_strlen(char *str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return index;
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strdup(char *src)
{
    int length;
    char *result;

    length = ft_strlen(src);  // Calculer la longueur de la chaîne source
    result = malloc(length + 1);  // Allouer de la mémoire pour la nouvelle chaîne (avec espace pour '\0')

    if (result == NULL)  // Vérification si malloc échoue
    {
        return NULL;
    }

    ft_strcpy(result, src);  // Copier la chaîne source dans la nouvelle chaîne allouée

    // Libérer immédiatement la mémoire et retourner NULL
    free(result);
    return NULL;  // Ce n'est pas une bonne idée de retourner NULL ici, car la chaîne est perdue.
}

int main(void)
{
    char *str = "Hello, world!";
    char *dup = ft_strdup(str);  // Créer une copie de la chaîne

    if (dup != NULL)
    {
        printf("Duplicate: %s\n", dup);
    }
    else
    {
        printf("Memory was freed in ft_strdup!\n");
    }

    return 0;
}
