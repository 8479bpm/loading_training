/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:38:34 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/11 10:38:37 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	index = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (index < power)
	{
		result *= nb;
		index++;
	}
	return (result);
}
/*
int	main(void)
{
	int result = ft_iterative_power(2, 3);
	printf("%d", result);
	return (0);
}
*/