/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseokane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:22:32 by nseokane          #+#    #+#             */
/*   Updated: 2020/06/25 14:22:36 by nseokane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void ft_dash_left(int spaceNo){
    char space = ' ';

    while (spaceNo >= 1){
        write(1, &space, sizeof space);
        spaceNo--;
    }

    write(1, "/", 1);
}


void ft_odd_numbers(int nb){
	int i = 1, starNo = 1;

	while(i <= nb){
		if(i % 2 != 0){
            while (starNo <= i){
                write(1, "*", 1);
                starNo++;
            }
        }
        i++;
	}
}

void ft_printing(int subrow, int starNo, int spaceNo){
    int i = 0;
    while (i < subrow){
        ft_dash_left(spaceNo);
        ft_odd_numbers(i + (starNo + i));
        write(1, "\\\n", 4);
        spaceNo--;
        i++;
    }
}

void ft_putchar(int row){
    int subrow, starNo, spaceNo, i = 0;

    if (row == 1){
        ft_printing(3, 1, (3 - 1));
    }else if (row == 2){
        ft_printing(3, 1, (9 - 1));
        ft_printing(4, 11, (4 - 1));
    }else if (row == 3){
        ft_printing(3, 1, (16 - 1));
        ft_printing(4, 11, (11 - 1));
        ft_printing(5, 23, (5 - 1));
    }else if (row == 4){
        ft_printing(3, 1, (24 - 1));
        ft_printing(4, 11, (19 - 1));
        ft_printing(5, 23, (13 - 1));
        ft_printing(6, 39, (6 - 1));
    }else if (row == 5){
        ft_printing(3, 1, (35 - 1));
        ft_printing(4, 11, (30 - 1));
        ft_printing(5, 23, (24 - 1));
        ft_printing(6, 39, (16 - 1));
        ft_printing(7, 57, (7 - 1));
    }
    
}

int main(int argc, char const *argv[]){
    ft_putchar(5);
    return 0;
}
