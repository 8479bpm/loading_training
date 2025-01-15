/*
Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>

void	maff_revalpha(void)
{
	char	index;
	char	upper;

	index = 'z';
	while (index >= 'a')
	{
		if (index % 2 == 0)
		{
			write(1, &index, 1);
		}
		else
		{
			upper = index - 32;
			write(1, &upper, 1);
		}
		index--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_revalpha();
	return (0);
}
