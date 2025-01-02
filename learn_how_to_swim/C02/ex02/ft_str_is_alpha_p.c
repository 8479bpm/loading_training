/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:53:53 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/02 17:53:55 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z') || !(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*string1;
	int		is_alpha;

	string1 = "ZERfbfg@!:\ndthh";
	is_alpha = ft_str_is_alpha(string1);
	printf("is alpha ? Yes = 0, No = 1, this string is : %d \n", is_alpha);
	return (0);
}
