/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:08:12 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/22 12:08:14 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define SUCCESS 0
# define FALSE 0
# define TRUE 1

# define EVEN_MSG "j'ai un nombre pair d'arguments.\n"
# define ODD_MSG "j'ai un nombre impair d'arguments.\n"

typedef	int	t_bool;

# define EVEN(var) ((var) % 2 == 0)

/* + prototype des fonctions ? */
void ft_putstr(char *str);
t_bool ft_is_even(int nbr);

#endif