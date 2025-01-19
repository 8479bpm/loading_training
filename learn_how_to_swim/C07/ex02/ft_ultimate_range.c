/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:23:59 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/19 18:24:01 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tab_size;
	int	index;

	tab_size = max - min;
	*range = malloc(sizeof(int) * tab_size);
	index = 0;
	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	if (*range == NULL)
	{
		return (-1);
	}
	while (index < tab_size)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (tab_size);
}
/*
int	main(void)
{
	int *tab;
	int size = ft_ultimate_range(&tab, 2, 6);
	int	index2;

	index2 = 0;
	if (tab != NULL)
	{
		while (index2 < 6 - 2)
		{
			printf("%d", tab[index2]);
			index2++;
		}
		free(tab);
	}
	else
	{
		printf("error allocating memory");
	}
	return (0);
}
*/
