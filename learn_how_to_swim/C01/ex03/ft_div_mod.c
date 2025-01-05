/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:12:13 by 8479bpm           #+#    #+#             */
/*   Updated: 2024/12/31 16:12:16 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int test1 = 6;
	int test2 = 3;
	int division;
	int modulo;

	ft_div_mod(test1, test2, &division, &modulo);
	printf("division: %d, modulo: %d", division, modulo);
	return (0);
}
*/