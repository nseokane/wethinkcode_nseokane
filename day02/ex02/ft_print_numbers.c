/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:37:07 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/19 10:37:11 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char num)
{
    write(1, &num, 1);
}

void ft_print_number(void)
{
    char i = '0';
    while (i <= '9')
    {
        ft_putchar(i);
        i++;
    }
}