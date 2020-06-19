/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:31:34 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/19 10:31:39 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
}

void ft_print_alphabet(void)
{
    char letter = 'z';
    while (letter >= 'a')
    {
        ft_putchar(letter);
        letter--;
    }

    write(1, "\n", 2);
}