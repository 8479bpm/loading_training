/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 15:02:57 by 8479bpm           #+#    #+#             */
/*   Updated: 2024/12/29 15:04:29 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int i, int j)
{
	int	i_ten;
	int	i_unit;
	int	j_ten;
	int	j_unit;

	i_ten = (i / 10) + '0';
	i_unit = (i % 10) + '0';
	j_ten = (j / 10) + '0';
	j_unit = (j % 10) + '0';
	write(1, &i_ten, 1);
	write(1, &i_unit, 1);
	write(1, " ", 1);
	write(1, &j_ten, 1);
	write(1, &j_unit, 1);
	if (!((i == 98) && (j == 99)))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_number(i, j);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
