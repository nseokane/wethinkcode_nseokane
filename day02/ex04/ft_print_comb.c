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
#include <stdio.h>
void ft_putchar(){}

void ft_combine(char a, char b, char c){
	printf("%d%d%d\n", a, b, c);
	// write(1, num, 4);
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
				ft_combine(a, b, c);
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
