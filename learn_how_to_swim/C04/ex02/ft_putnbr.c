/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:04:10 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/07 17:04:12 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	stockage[11];
	int		index;

	index = 0;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (nb != 0)
	{
		stockage[index] = (nb % 10) + '0';
		nb = nb / 10;
		index++;
	}
	while (index > 0)
	{
		ft_putchar(stockage[--index]);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
    write(1, "\n", 1);  
    ft_putnbr(-45644);
    write(1, "\n", 1);  
    ft_putnbr(0);
    write(1, "\n", 1);  
    ft_putnbr(45367678);
    write(1, "\n", 1);  
    ft_putnbr(100000);
    write(1, "\n", 1);  
    ft_putnbr(-342);
	return (0);
}
*/