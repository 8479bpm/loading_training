/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:21:50 by 8479bpm           #+#    #+#             */
/*   Updated: 2024/12/28 16:30:22 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	index;

	index = '0';
	while (index <= '9')
	{
		write(1, &index, 1);
		index++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
*/
