/* 
Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$ 
*/

#include <unistd.h>

void	maff_alpha(void)
{
	char	index;
	char	upper;

	index = 'a';
	while (index <= 'z')
	{
		if (index % 2 != 0)
		{
			write(1, &index, 1);
		}
		else
		{
			upper = index - 32; /* on calcule pour chaque position */
			write(1, &upper, 1);
		}
		index++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_alpha();
	return (0);
}