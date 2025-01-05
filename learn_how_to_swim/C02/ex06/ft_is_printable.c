/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_printable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:10:14 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/03 14:10:16 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if ((str[index] < 32 || str[index] == 127))
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
	int		is_printable;

	string1 = "frjiogej.@!:a^$";
	is_printable = ft_str_is_printable(string1);
	printf("is printable ? : %d \n", is_printable);
	return (0);
}
*/