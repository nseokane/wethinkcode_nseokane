int ft_iterative_power(int nb, int power){
    int number = 1;
    while (power != 0){
        number *= nb;
        --power;
    }
    return number;
    
}