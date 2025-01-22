/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:00:04 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/22 10:00:06 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	new_length;
	int	strs_length;
	int	new_strs_index;
	char	*new_string;

	strs_length = 0;
	new_length = 0;
	new_strs_index = 1;
	if (size == 0)
		return (malloc(1));
	new_length = ft_strlen(sep) * (size - 1) + 1;
	while (strs_length < size)
	{
		new_length += ft_strlen(strs[strs_length]);
		strs_length++;
	}
	new_string = malloc(sizeof(char) * new_length);
	if (new_string == NULL)
		return (NULL);
	ft_strcpy(new_string, strs[0]);
	while (new_strs_index < size)
	{
		ft_strcat(new_string, sep);
		ft_strcat(new_string, strs[new_strs_index]);
		new_strs_index++;
	}
	return (new_string);
}

int	main(void)
{
	char *strings[] =
	{
		"In", "a", "gentle", "way", "you", "can", "shake", "the", "world"
	};
	char	separator[] = " ";
	char	*new_string = ft_strjoin(9, strings, separator);

	if (new_string != NULL)
	{
		printf("%s", new_string);
		free(new_string);
	}
	
	return (0);
}

/*

strings : "abc", "0123456789", "wxyz"

separator : @@@

new string : "abc@@@0123456789@@@wxyz"

*/
