#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
}

int ft_print_alphabet()
{
    char letter = 'z';
    while (letter >= 'a')
    {
        ft_putchar(letter);
        letter--;
    }

    write(1, "\n", 2);
    return 0;
}