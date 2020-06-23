/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:16:11 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/23 11:16:20 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power){
    int number = 1;

    if (power != 0){
        number = nb * ft_iterative_power(nb, power - 1);
        return number;
    }else{
        return 1;
    }

    return number;
    
}
