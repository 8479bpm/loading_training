/* Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$> */

#include <unistd.h>

void	ft_countdown(void)
{
	char	index;

	index = '9';
	while (index >= '0')
	{
		write(1, &index, 1);
		index--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
	return (0);
}