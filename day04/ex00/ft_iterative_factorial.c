/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:05:35 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/23 10:05:39 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb){
    int i = 1, fact = 1;
    while (i <= nb) {
        fact = fact * i;
        i++;
    }
    return fact;
}
