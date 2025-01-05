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
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
	    // Si n n'a pas encore atteint 0, on compare les caractères '\0' si l'un des pointeurs a atteint la fin
    if (n > 0)
    {
        return ((unsigned char)*s1 - (unsigned char)*s2);
    }
    
    return 0;  // Si les n premiers caractères sont identiques
}

/*
int	main(void)
{
	int	result;

	char	string1[] = "Hella";
	char	string2[] = "Hello World";
	result = ft_strncmp(string1, string2, 6);
	printf("%d", result);
	return (0);
}
*/