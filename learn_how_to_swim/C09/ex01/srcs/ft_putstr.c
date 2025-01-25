/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:53:40 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/05 14:53:42 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft.h"

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

void ft_putstr(char *str)
{
	write (1, str, ft_strlen(str));
}
/*
int	main(void)
{
	char str1[] = "dis moi combien je mesure";
	ft_putstr(str1);
	return (0);
}
*/