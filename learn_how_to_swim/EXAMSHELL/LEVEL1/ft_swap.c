/* Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows: */

void	ft_swap(int *a, int *b);

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int	first;
	int second;

	first = 1;
	second = 2;
	printf("Before swap first: %d, second: %d\n", first, second);
	ft_swap(&first, &second);
	printf("After swap first: %d, second: %d\n", first, second);
	return (0);
} */