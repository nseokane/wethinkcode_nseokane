/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:06:09 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/21 13:06:12 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_ultimate_div_mod(int *a,int *b)
{
	int i;
	i = *a;
	*a = *a / *b;
	*b = i % *b;
}
