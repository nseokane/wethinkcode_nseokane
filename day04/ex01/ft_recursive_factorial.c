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

