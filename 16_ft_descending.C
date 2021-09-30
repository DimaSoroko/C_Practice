/*
Write the function ft_descending that will take an integer as an argument

The function must print all the integers between its argument and 0

The printing must start with the argument and be in descending order

If its argument is less than 0, it must print "Already lower than 0", followed by a newline

Each integer printed must be followed by a newline

The function must be prototyped as follows:

void ft_descending(int n);
*/

#include <stdio.h>

void ft_descending(int n)
{
    if (n < 0)
    {
        printf("Already lower than 0\n");
    }
    while (n >= 0)
    {
        printf("%d\n", n--);
    }
}

/*
int main()
{
    ft_descending(0);
    ft_descending(-5);
    return (0);
}
*/