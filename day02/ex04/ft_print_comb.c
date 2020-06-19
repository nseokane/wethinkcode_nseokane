/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:01:53 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/19 11:50:04 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(int a, int b, int c){
	char a_char = '0' + a;
	char b_char = '0' + b;
	char c_char = '0' + c;

	char arr[] = {a_char, b_char, c_char};

	write(1, arr, sizeof arr);
	write(1, ", ",2);
}

void ft_print_comb(void){
	int a;
	while (a <= 9){
		int b;
		b = a + 1;
		while (b <= 9){
			int c;
			c = b + 1;
			while (c <= 9){
				ft_putchar(a, b, c);
				c++;
			}
			b++;
		}		
		a++;
	}
}
