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

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
*/