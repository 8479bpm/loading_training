/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:47:22 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/04 11:47:24 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(void)
{
	int	result;

	char	string1[] = "Hello World";
	char	string2[] = "Hello World";
	result = ft_strcmp(string1, string2);
	printf("%d", result);
	return (0);
}
*/