/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:12:31 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/19 13:12:35 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(int a, int b, int c, int d){
	char a_char = '0' + a;
	char b_char = '0' + b;
	char c_char = '0' + c;
	char d_char = '0' + d;

	char arr1[] = {a_char, b_char};
	char arr2[] = {c_char, d_char};

	write(1, arr1, sizeof arr1);
	write(1, " ", 1);
	write(1, arr2, sizeof arr2);
	write(1, ", ", 2);
}

void ft_print_comb(void){
	int a;
	while (a <= 9){

		int b;
		b = a;
		while (b <= 9){

			int c;
			c = b;
			while (c <= 9){
				
				int d;
				d = c;
				while (d <= 9){
					ft_putchar(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}		
		a++;
	}
}

int main(){
	ft_print_comb();
	return 0;
}
