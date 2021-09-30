/* 
Write the function ft_odd_numbers that will take an integer as an argument

The function must print all the odd integers between the argument and 0, each followed by a newline character

If the argument is odd, it needs to be printed. 0 should not be printed.

The printing must start at the argument, and depending on its sign print the numbers in ascending or descending order

The function must be prototyped as follows:

void ft_odd_numbers(int n);
*/

#include <stdio.h>

void ft_odd_numbers(int n)
{
    while (n > 0)
    {
        if (n % 2)
        {
            printf("%d\n", n);
        }
        n--;
    }
    while (n < 0)
    {
        if (n % 2)
        {
            printf("%d\n", n);
        }
        n++;
    }
}


int main()
{
    ft_odd_numbers(5);
    ft_odd_numbers(-5);
    return (0);
}
