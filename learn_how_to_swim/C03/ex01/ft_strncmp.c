/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:00:06 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/04 15:00:08 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
/*
int	main(void)
{
	int	result;

	char	string1[] = "Hello World";
	char	string2[] = "Hello World";
	result = ft_strncmp(string1, string2, 16);
	printf("%d", result);
	return (0);
}
*/