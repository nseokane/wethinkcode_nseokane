#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
    write(1, "\n", 2);
}

int ft_print_alphabet()
{
    char letter = 'a';
    while (letter <= 'z')
    {
        ft_putchar(letter);
        letter++;
    }

    return 0;
}