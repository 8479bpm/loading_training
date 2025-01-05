/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:42:45 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/01 17:42:48 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int length = 0;

    // Tant que le pointeur ne pointe pas sur '\0', on incrémente le pointeur
    while (*str != '\0')  // Tant que le caractère pointé par str n'est pas '\0'
    {
        length++;  // On incrémente le compteur de longueur
        str++;  // On passe au caractère suivant
    }

    return length;  // Retourne la longueur de la chaîne
}
/*
int	main(void)
{
	char	*string1;
	int		test;

	string1 = "je fais 22 caractères";
	test = ft_strlen(string1);
	printf("%d", test);
	return (0);
}
*/