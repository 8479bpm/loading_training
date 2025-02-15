/* 
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$ */

#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

// Fonction qui vérifie si un caractère a déjà été affiché dans la chaîne "displayed".
int already_displayed(char c, char *displayed)
{
    int i = 0;
    
    // On parcourt la chaîne 'displayed' pour vérifier si le caractère existe déjà
    while (displayed[i] != '\0')
    {
        if (displayed[i] == c)
            return 1;  // Caractère déjà affiché
        i++;
    }
    return 0;  // Caractère non affiché
}

// Fonction principale qui affiche les caractères communs sans doublons.
int inter(char *str1, char *str2)
{
    int index1 = 0;
    int index2 = 0;
    char displayed[256] = "";  // Chaîne qui garde une trace des caractères déjà affichés.

    // On parcourt chaque caractère de str1
    while (str1[index1] != '\0')
    {
        index2 = 0;
        
        // Si le caractère n'a pas déjà été affiché
        if (!already_displayed(str1[index1], displayed))
        {
            // Recherche du caractère dans str2
            while (str2[index2] != '\0')
            {
                if (str1[index1] == str2[index2])  // Si le caractère existe aussi dans str2
                {
                    write(1, &str1[index1], 1);  // Affiche le caractère
                    // Ajoute le caractère à la chaîne "displayed" pour marquer qu'il a été affiché
                    displayed[index1] = str1[index1]; 
                    break;  // On arrête de chercher ce caractère dans str2
                }
                index2++;
            }
        }
        index1++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc == 3)  // Si 2 arguments sont passés
    {
        inter(argv[1], argv[2]);  // Appelle la fonction inter avec les deux chaînes
    }
    ft_putchar('\n');  // Affiche un retour à la ligne
    return (0);
}
