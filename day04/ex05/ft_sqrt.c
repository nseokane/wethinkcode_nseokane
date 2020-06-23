/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:17:14 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/23 13:17:19 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int p_square_check(int num){
    int i = 1;

    while ((i * i) <= num){
        if ((num % i == 0) && (num / i == i)){
            return 1;
        }
        i++;
    }
    return 0;
}

int ft_sqrt(int nb) {
    int i = 1, x = nb, z = 1;

    if (p_square_check(nb)){
        while (x > i){
            x = (x + i) / 2;
            i = nb / x;
        }
        return x; 
    }else{
        return 0;
    }
}