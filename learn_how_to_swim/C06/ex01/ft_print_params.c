/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 22:51:42 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/14 22:51:44 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	int	index;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			write(1, argv[index], ft_strlen(argv[index]));
			write(1, "\n", 1);
			index++;
		}
		return (0);
	}
}
