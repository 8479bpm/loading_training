/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:29:43 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/18 15:29:47 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dst == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dst, src);
	return (dst);
}
/*
int	main(void)
{
	char	*source = "copy me";
	char 	*duplicated_str = ft_strdup(source);
	if (duplicated_str != NULL)
	{
		printf("%s", duplicated_str);
		free(duplicated_str);
	}
	else
	{
		printf("allocation failed");
	}
	return (0);
}
*/
