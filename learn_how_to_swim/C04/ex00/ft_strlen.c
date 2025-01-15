/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:53:40 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/05 14:53:42 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
int	main(void)
{
	char str1[] = "dis moi combien je mesure";
	int result;

	result = ft_strlen(str1);
	printf("%d", result);
	return (0);
}
*/