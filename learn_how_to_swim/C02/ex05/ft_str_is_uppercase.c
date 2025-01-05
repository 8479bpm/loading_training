/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:19:46 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/03 13:19:48 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
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
	int		is_uppercase;

	string1 = "";
	is_uppercase = ft_str_is_uppercase(string1);
	printf("is uppercase ? : %d \n", is_uppercase);
	return (0);
}
*/