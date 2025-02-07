/* 
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows: 
*/

char    *ft_strdup(char *src);

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char    *ft_strdup(char *src)
{
	char *dup;
	int	len;
	int	index;

	index = 0;
	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return NULL;
	}
	while (index < len)
	{
		dup[index] = src[index];
		index++;
	}
	dup[len] = '\0';

	return dup;
}

int	main(void)
{
	char *patate = "testons\n";
	char *test = ft_strdup(patate);
	printf("%s", test);
	free (test);
	return 0;
}