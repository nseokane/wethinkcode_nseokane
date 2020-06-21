/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 13:15:46 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/21 13:15:48 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	num;
 
	i = 0;
	neg = 0;
	num = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += ((int)str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}
