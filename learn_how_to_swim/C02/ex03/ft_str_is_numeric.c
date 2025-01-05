/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 21:35:59 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/02 21:36:02 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
		{
			return (0);
		}
		index++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*string1;
	int		is_num;

	string1 = "6444444444444444444";
	is_num = ft_str_is_numeric(string1);
	printf("is num ? %d \n", is_num);
	return (0);
}
*/