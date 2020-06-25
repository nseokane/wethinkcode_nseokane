/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:45:44 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/25 10:46:02 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i = 0;

    while (i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }

    while (i < n){
        *(dest + i++) = '\0';
        i++;
    }
    
    return dest;
}
