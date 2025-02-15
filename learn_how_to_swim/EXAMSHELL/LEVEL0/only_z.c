/* Assignment name  : only_z
Expected files   : only_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a 'z' character on the standard output. */

#include <unistd.h>

void	only_z(void)
{
	write(1, "z", 1);
}

int	main(void)
{
	only_z();
	return (0);
}