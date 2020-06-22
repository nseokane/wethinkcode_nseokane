#include <unistd.h>
int main() {
    char fact = ft_recursive_factorial(5);
    printf("Answer %d", fact);
    return 0;
}

int ft_recursive_factorial(int nb){
    int i = nb, fact = 1;
    while (nb / i != nb) {
        fact = fact * i;
        i--;
    }
    return fact;
}
