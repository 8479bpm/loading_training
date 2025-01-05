/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 21:52:20 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/02 21:52:22 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
	int		is_num;

	string1 = "6444444444444444444";
	is_num = ft_str_is_numeric(string1);
	printf("is num ? %d \n", is_num);
	return (0);
}
*/