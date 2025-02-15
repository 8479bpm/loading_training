/* Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
 */
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

    // On applique ROT13 à chaque caractère de la chaîne
    while (argv[1][index] != '\0')
    {
        // Si la lettre est entre 'a' et 'm', on l'augmente de 13
        if (argv[1][index] >= 'a' && argv[1][index] <= 'm')
        {
            argv[1][index] += 13;
        }
        // Si la lettre est entre 'n' et 'z', on la diminue de 13
        else if (argv[1][index] >= 'n' && argv[1][index] <= 'z')
        {
            argv[1][index] -= 13;
        }
        // Si la lettre est entre 'A' et 'M', on l'augmente de 13
        else if (argv[1][index] >= 'A' && argv[1][index] <= 'M')
        {
            argv[1][index] += 13;
        }
        // Si la lettre est entre 'N' et 'Z', on la diminue de 13
        else if (argv[1][index] >= 'N' && argv[1][index] <= 'Z')
        {
            argv[1][index] -= 13;
        }

        // Affiche chaque caractère modifié
        write(1, &argv[1][index], 1);
        index++;
    }

    // Affiche un retour à la ligne à la fin
    write(1, "\n", 1);
    return (0);
}
