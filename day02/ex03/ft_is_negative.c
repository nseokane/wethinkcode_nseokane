/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:38:32 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/19 10:46:17 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char letter){
	write(1, &letter, 1);
}

void ft_is_negative(int n){
	char letter;

	if (n >= 0){
		letter = 'P';
	}else{
		letter = 'N';
	}

	ft_putchar(letter);
	write(1, "\n", 2);
}
