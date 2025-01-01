/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:42:45 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/01 17:42:48 by 8479bpm          ###   ########.fr       */
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
	char	*string1;
	int		test;

	string1 = "je fais 22 caractères";
	test = ft_strlen(string1);
	printf("%d", test);
	return (0);
}
*/