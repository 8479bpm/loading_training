/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:05:00 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/03 13:05:02 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if ((*str < 'a') || (*str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*string1;
	int		is_lowercase;

	string1 = "ababab";
	is_lowercase = ft_str_is_lowercase(string1);
	printf("is lowercase ? %d \n", is_lowercase);
	return (0);
}
*/