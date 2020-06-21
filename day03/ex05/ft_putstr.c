/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:07:50 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/21 13:07:52 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char a)
{
	write(1,&a,1);
}
void ft_putstr(char *str)
{
	int b;
	b =0;
	while(str[b])
	{
		ft_putchar(str[b]);
		b++;
	}
}