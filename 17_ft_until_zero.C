/*
Write the function ft_until_zero that will take an integer as an argument

The function must print all the integers between the argument and 0 (both included)

The printing must start at the argument, and depending on its sign print the numbers in ascending or descending order

The function must be prototyped as follows:

void ft_until_zero(int n);
*/

#include <stdio.h>

void ft_until_zero(int n)
{
    while (n > 0)
    {
        printf("%d\n", n--);

    }

    while (n <= 0)
    {
        printf("%d\n", n++);
    }
}

/*
int main ()
{
    ft_until_zero(5);
    ft_until_zero(-3);
    return(0);
}
*/