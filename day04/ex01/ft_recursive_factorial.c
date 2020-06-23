/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:41:12 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/23 10:41:17 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb){
    int i = 1, fact = 0;

    if (nb >= i){
        fact = nb * ft_recursive_factorial(nb - i);
        return fact;
    }else{
        return fact;
    }
}

