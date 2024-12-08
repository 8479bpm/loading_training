#include <unistd.h>

int ft_strlen(char *str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return index;
}

int main(int argc, char **argv)
{
    int index = 1;
    int index2;

    // Tri des arguments par ordre lexicographique (ordre ASCII)
    while (index < argc - 1)
    {
        index2 = index + 1;
        while (index2 < argc)  // Comparer avec tous les autres arguments
        {
            // Comparaison des arguments en fonction de l'ordre ASCII
            if (argv[index][0] > argv[index2][0])
            {
                char *temp = argv[index];
                argv[index] = argv[index2];
                argv[index2] = temp;
            }
            index2++;
        }
        index++;
    }

    // Affichage des arguments triés
    index = 1;  // Commencer à l'argument 1 pour ignorer argv[0]
    while (index < argc)
    {
        write(1, argv[index], ft_strlen(argv[index]));  // Affichage de l'argument
        write(1, "\n", 1);  // Retour à la ligne
        index++;
    }

    return 0;
}
