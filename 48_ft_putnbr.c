/*

Write a function ft_putnbr which takes an integer as an argument

The function must be prototyped as follows:  void  ft_putnbr(int n);

The function will output the integer on the standard output, followed by a newline character

Allowed functions:	write

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{

    if (n >= 0 && n < 10)
    {
        ft_putchar(n + '0');
    }
    else if (n < 0)
    {
        write(1, "\n", 1);
        ft_putchar('-');
        ft_putnbr(-n);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);

        /*ex: n = 12345
        First Call :
        ft_putnbr(12345 / 10) = 1234
        ft_putnbr(12345 % 10) = 5
        Second Call :
        ft_putnbr(1234 / 10) = 123
        ft_putnbr(1234 % 10) = 4
        Third Call :
        ft_putnbr(123 / 10) = 12
        ft_putnbr(123 % 10) = 3
        Forth Call :
        ft_putnbr(12 / 10) = 1 
        ft_putnbr(12 % 10) = 2
        Then will execute to the top ft_putnbr(1), ft_putnbr(2), ft_putnbr(3), ft_putnbr(4), ft_putnbr(5)

        */
    }
}

/*

int main(void)
{
    ft_putnbr(2147483647);
    ft_putnbr(-2147483647);
    return (0);
}

*/
