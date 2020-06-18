#include <unistd.h>

void ft_putchar(int num)
{
    write(1, &num, 1);
}

int ft_print_number()
{
    int i = 0;
    while (i < 10)
    {
        ft_putchar(i);
        i++;
    }

    write(1, "\n", 2);
    return 0;
}