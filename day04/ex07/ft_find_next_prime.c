/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:03:23 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/23 15:59:36 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb){
    int i = 2, prime = 1, x = nb, found = 0;

    while (i <= (nb / 2)){
        if (nb % i == 0){
            prime = 0;
            break;
        }
        i++;
    }

    if (nb <= 1){
         return 2;
    }

    while (!found){
        if (prime == 1){
            found = 1;
        }

        x++;
        return x;
    }
}
