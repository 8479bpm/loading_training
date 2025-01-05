/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 8479bpm <8479bpm@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:31:33 by 8479bpm           #+#    #+#             */
/*   Updated: 2025/01/02 17:31:39 by 8479bpm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    // Copier jusqu'à n caractères ou jusqu'à la fin de la chaîne source
    while (n > 0 && *src != '\0')  // Tant qu'il reste des caractères à copier
    {
        *dest = *src;  // Copie du caractère pointé par src dans dest
        dest++;         // Déplacement du pointeur destination
        src++;          // Déplacement du pointeur source
        n--;            // Décrémenter le nombre de caractères à copier
    }

    // Si n est encore positif, on remplit le reste de dest avec des '\0'
    while (n > 0)
    {
        *dest = '\0';
        dest++;  // Déplacement du pointeur destination
        n--;     // Décrémenter
    }

    return dest;  // Retourner le pointeur vers la destination
}
/*
int main(void)
{
    char *source1;
    char destination1[30];

    source1 = "copy me into destination";
    ft_strncpy(destination1, source1, 3);
    printf("destination: %s\n", destination1);  // Affiche "destination: cop"
    
    return 0;
}
*/