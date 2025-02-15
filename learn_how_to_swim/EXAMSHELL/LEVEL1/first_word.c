#include <unistd.h>

int main(int argc, char *argv[])
{
    int index = 0;

    // Si le nombre d'arguments est incorrect, on affiche un saut de ligne.
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    // Ignorer les espaces et tabulations au début
    while (argv[1][index] == ' ' || argv[1][index] == '\t')
    {
        index++;
    }

    // Afficher le premier mot
    while (argv[1][index] != ' ' && argv[1][index] != '\t' && argv[1][index] != '\0')
    {
        write(1, &argv[1][index], 1);
        index++;
    }

    // Afficher un retour à la ligne à la fin
    write(1, "\n", 1);

    return (0);
}
