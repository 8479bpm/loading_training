/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:30:04 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/04 15:30:06 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index_dest;
	int	index_source;

	index_dest = 0;
	index_source = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	while (src[index_source] != '\0')
	{
		dest[index_dest] = src[index_source];
		index_dest++;
		index_source++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
/*
int 	main(void)
{
	char string_source[] = "copy me";
	char string_dest[250] = "I was there first";
	ft_strcat(string_dest, string_source);
	printf("%s", string_dest);
	return 0;
}
*/
