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
#include <stdio.h>
void ft_putchar(){}


void ft_combine(char a, char b, char c, char d){
	printf("%d%d %d%d. ", a, b, c, d);
	// write(1, num, 4);
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
					ft_combine(a, b, c, d);
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
