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


void ft_putchar(int row){
    int subrow, starNo, spaceNo, i = 0;

    if (row == 1){
        subrow = 3;
        starNo = 1;
        spaceNo = subrow - 1;
        while (i < subrow){
            ft_dash_left(spaceNo);
            ft_odd_numbers(i + (starNo + i));
            write(1, "\\\n", 4);
            spaceNo--;
            i++;
        }
    }else if (row == 2){
        subrow = 4;
        starNo = 11;
        spaceNo = subrow - 1;
        while (i < subrow){
            ft_dash_left(spaceNo);
            ft_odd_numbers(i + (starNo + i));
            write(1, "\\\n", 4);
            spaceNo--;
            i++;
        }
    }else if (row == 3){
        subrow = 5;
        starNo = 23;
        spaceNo = subrow - 1;
        while (i < subrow){
            ft_dash_left(spaceNo);
            ft_odd_numbers(i + (starNo + i));
            write(1, "\\\n", 4);
            spaceNo--;
            i++;
        }
    }else if (row == 4){
        subrow = 6;
        starNo = 39;
        spaceNo = subrow - 1;
        while (i < subrow){
            ft_dash_left(spaceNo);
            ft_odd_numbers(i + (starNo + i));
            write(1, "\\\n", 4);
            spaceNo--;
            i++;
        }
    }else if (row == 5){
        subrow = 7;
        starNo = 57;
        spaceNo = subrow - 1;
        while (i < subrow){
            ft_dash_left(spaceNo);
            ft_odd_numbers(i + (starNo + i));
            write(1, "\\\n", 4);
            spaceNo--;
            i++;
        }
    }
    
}

int main(int argc, char const *argv[]){
    ft_putchar(5);
    return 0;
}
