/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:03:12 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/15 11:03:15 by 8479bpm          ###   ########.fr       */
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

	index = argc - 1;
	while (index >= 1)
	{
		write(1, argv[index], ft_strlen(argv[index]));
		write(1, "\n", 1);
		index--;
	}
	return (0);
}
