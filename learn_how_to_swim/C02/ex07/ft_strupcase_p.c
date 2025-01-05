/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:23:36 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/03 17:23:38 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char	string1[] = "AbcDefGhiJklMn";

	ft_strupcase(string1);
	printf("%s", string1);
	return (0);
}
*/