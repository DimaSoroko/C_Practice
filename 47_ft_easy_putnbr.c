/*
Write a function ft_easy_putnbr which takes an integer as an argument

The function must be prototyped as follows:  void  ft_easy_putnbr(int n);


The function will never be tested with integers outside of range [-100 ; 100]

If its argument is divisible by 8, print "Ocho" on standard output

If its argument is divisible by 5, print "Cinco" on standard output

If its argument is divisible by both 8 and 5, print "Muy bien" on standard output

Othwerwise, print the argument itself

All output must be followed by a newline character

Examples:

ft_easy_putnbr(4); // will output "4"
ft_easy_putnbr(8); // will output "Ocho"
ft_easy_putnbr(-5); // will output "Cinco"
ft_easy_putnbr(40); // will output "Muy bien"

Allowed functions:	write

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_easy_putnbr(int n)
{
    if (n % 8 == 0 && n % 5 == 0)
    {
        ft_putstr("Muy bien");
    }
    else if (n % 8 == 0)
    {
        ft_putstr("Ocho");
    }
    else if (n % 5 == 0)
    {
        ft_putstr("Cinco");
    }
    else
    {
        if (n < 0)
        {
            write(1, "-", 1);
            n = -n;
        }
        if (n > 9)
        {
            ft_putchar(n / 10 + '0'); // ex: n = 17, 17 / 10 = 1
            ft_putchar(n % 10 + '0'); // 17 % 10 = 17
        }
        else
        {
            ft_putchar(n % 10 + '0');
        }
    }
    write(1, "\n", 1);
}

int main()
{
    ft_easy_putnbr(4);
    ft_easy_putnbr(8);
    ft_easy_putnbr(-5);
    ft_easy_putnbr(40);

    return (0);
}
