/* Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$ */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int index = 0;

    // Si le nombre d'arguments n'est pas 2, afficher "a\n"
    if (argc != 2)
    {
        write(1, "a\n", 2);
        return 0;
    }

    // Chercher le premier 'a' dans la chaîne
    while (argv[1][index] != '\0')  // Tant que ce n'est pas la fin de la chaîne
    {
        if (argv[1][index] == 'a')  // Si on trouve un 'a'
        {
            write(1, "a", 1);  // Afficher 'a'
            write(1, "\n", 1);  // Afficher une nouvelle ligne
            return 0;  // Terminer la fonction après avoir trouvé le premier 'a'
        }
        index++;
    }

    // Si aucun 'a' n'a été trouvé, afficher une nouvelle ligne
    write(1, "\n", 1);

    return 0;
}
