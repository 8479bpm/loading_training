/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:32:36 by 8479bpm           #+#    #+#             */
/*   Updated: 2024/12/28 16:43:30 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 2);
	}
}
/*
int	main(void)
{
	int	test1;
	int	test2;
	int	test3;

	test1 = -76754;
	test2 = 2578;
	test3 = 0;
	ft_is_negative(test1);
	write(1, "\n", 1);
	ft_is_negative(test2);
	write(1, "\n", 1);
	ft_is_negative(test3);
	write(1, "\n", 1);
	return (0);
}
*/
