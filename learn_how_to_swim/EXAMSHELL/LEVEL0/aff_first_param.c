/* Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$ */

#include <unistd.h>

int     argv_length(char *string_to_check)
        {
                int index;

                index = 0;
                while (string_to_check[index] != '\0')
                {
                        index++;
                }
                return (index);
        }

int	main(int argc, char *argv[])
{	
	if (argc > 1)
	{
		write(1, argv[1], argv_length(argv[1]));

	}
	write(1, "\n", 1);
	return (0);
}
