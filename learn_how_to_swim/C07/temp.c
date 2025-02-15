/* strdup */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

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

char *ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dest, src);
	return (dest);
}

/* range */

int	*ft_range(int min, int max)
{
	int tab_length;
	int *returned_tab;
	int	index;

	tab_length = max - min;
	returned_tab = malloc(sizeof(int) * (tab_length + 1));
	index = 0;
	if (min >= max)
	{
		return (NULL);
	}
	while (index < tab_length)
	{
		returned_tab[index] = min + index;
		index++;
	}
	return (returned_tab);
}

/* ultimate range */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tab_size;
	int	index;

	tab_size = min - max;
	index = 0;
	*range = malloc(sizeof(int) * tab_size);
	if (min >= max)
	{
		*range = NULL;
		return (0)
	}
	if (range == NULL)
	{
		return (-1);
	}
	while (index < tab_size)
	{
		*range[index] = min + index;
		index++; 
	}
	return (tab_size);
	
}

int	main(void)
{
	/* strdup */
	char	*source = "copy me";
	char 	*duplicated_str = ft_strdup(source);
	if (duplicated_str != NULL)
	{
		printf("%s", duplicated_str);
		free(duplicated_str);
	}
	else
	{
		printf("allocation failed");
	}

	/* range */
	int *tab = ft_range(3, 8);
	int	index;

	index = 0;
	if (tab != NULL)
	{
		while (index < 8 - 3)
		{
			printf("%d", tab[index]);
			index++;
		} 
		free(tab);
	}
	else
	{
		printf("error allocating memory");
	}
	/* ultimate range */
	int **tab2 = ft_ultimate_range(2, 6);
	int	index2;

	index = 0;
	if (*tab2 != NULL)
	{
		while (index < 6 - 2)
		{
			printf("%d", *tab[index]);
			index++;
		}
		free(*tab2);
	}
	else
	{
		printf("error allocating memory");
	}


	return (0);
}