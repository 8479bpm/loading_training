/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kidp <kidp@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:38:34 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/12 12:54:32 by kidp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return(0);
    }
    if (nb == 0 || nb ==1)
    {
        return(1);
    }
    return (nb * ft_recursive_factorial(nb-1));
    }
int main(void)
{
    printf("%d", ft_recursive_factorial(5));
    return (0);
}
