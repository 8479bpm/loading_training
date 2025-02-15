/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:52:05 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/18 16:52:09 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	tab_size;
	int	*tab;
	int	index;

	tab_size = max - min;
	tab = malloc(sizeof(int) * tab_size);
	index = 0;
	if (min >= max)
	{
		return (NULL);
	}
	if (tab == NULL)
	{
		return (NULL);
	}
	while (index < tab_size)
	{
		tab[index] = min + index;
		index++;
	}
	return (tab);
}
/*
int	main(void)
{
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
	return (0);
}
*/