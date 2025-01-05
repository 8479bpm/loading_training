/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:21:05 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/05 10:21:12 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (0 < nb && *src)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	string_src[] = "copy me at the end of dest";
	char	string_dest[200] = "I'm the first string and I'm next to : "; 

	ft_strncat(string_dest, string_src, 22);
	printf("%s", string_dest);
	return (0);
}
*/
