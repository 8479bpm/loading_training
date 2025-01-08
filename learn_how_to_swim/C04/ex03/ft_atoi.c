/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:48:09 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/08 13:48:12 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	index;

	index = 0;
	sign = 1;
	result = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] < 13))
	{
		index++;
	}
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
		{
			sign = -sign;
		}
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * sign);
}
/*
int main(void)
{
    char str1[] = "   ---+--+1234ab567";
    char str2[] = "   +42";
    char str3[] = "   -123";
    char str4[] = "42abc";
    char str5[] = "   --+--456";

    printf("ft_atoi(str1) = %d\n", ft_atoi(str1));  // Devrait afficher -1234
    printf("ft_atoi(str2) = %d\n", ft_atoi(str2));  // Devrait afficher 42
    printf("ft_atoi(str3) = %d\n", ft_atoi(str3));  // Devrait afficher -123
    printf("ft_atoi(str4) = %d\n", ft_atoi(str4));  // Devrait afficher 42
    printf("ft_atoi(str5) = %d\n", ft_atoi(str5));  // Devrait afficher 456

    return 0;
}
*/
