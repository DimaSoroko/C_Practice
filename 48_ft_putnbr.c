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

     if (n == -2147483648)
    {

        ft_putchar('-');
        ft_putchar('2');
        n = 147483648;
        write(1, "\n", 1);
        
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
        write(1, "\n", 1);
    }

    if (n >= 10)
    {
        write(1, "\n", 1);
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

    else
    {
        ft_putchar(n + '0');
    }
}


int main(void)
{
    ft_putnbr(2147483647);
    ft_putnbr(27);
    ft_putnbr(-47);
    ft_putnbr(0);
    return (0);
}

