/* Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$ */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int first_argv_to_int;
    int third_argv_to_int;

    // Vérifier si le nombre d'arguments est 4 (le nom du programme + 3 arguments)
    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }

    // Convertir les arguments en entiers
    first_argv_to_int = atoi(argv[1]);
    third_argv_to_int = atoi(argv[3]);

    // Vérifier l'opérateur et effectuer l'opération correspondante
    if (argv[2][0] == '+')
    {
        printf("%d", first_argv_to_int + third_argv_to_int);
    }
    else if (argv[2][0] == '-')
    {
        printf("%d", first_argv_to_int - third_argv_to_int);
    }
    else if (argv[2][0] == '*')
    {
        printf("%d", first_argv_to_int * third_argv_to_int);
    }
    else if (argv[2][0] == '/')
    {
        // Ajouter une vérification pour la division par zéro
        if (third_argv_to_int == 0)
        {
            write(1, "Error\n", 6);
        }
        else
        {
            printf("%d", first_argv_to_int / third_argv_to_int);
        }
    }
    else if (argv[2][0] == '%')
    {
        // Ajouter une vérification pour le modulo par zéro
        if (third_argv_to_int == 0)
        {
            write(1, "Error\n", 6);
        }
        else
        {
            printf("%d", first_argv_to_int % third_argv_to_int);
        }
    }

    // Afficher une nouvelle ligne
    printf("\n");

    return (0);
}
