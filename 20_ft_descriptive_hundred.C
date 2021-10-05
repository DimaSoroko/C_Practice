/*
Write the function ft_descriptive_hundred that will take an integer as an argument

The integer passed as an argument will belong to a range [0, 999]

The function must print the integer following the format:

n_hundred Hundred under_hundred
The function must only call printf once with the following arguments:

// Note: You are free to name variables as you wish
printf("%d Hundred %d\n", n_hundred, under_hundred);
If the integer argument is outside range [0, 999], nothing needs to be printed

The function must be prototyped as follows: void ft_descriptive_hundred(int n)
*/

#include <stdio.h>

void ft_descriptive_hundred(int n)
{
    int n_hundred;
    int under_hundred;
    if (n < 999)
    {
        if (n >= 0)
        {

            if (n <= 999)
            {
                n_hundred = n / 100;
                under_hundred = n % 100;
            }

            if (n < 100)
            {
                n_hundred = 0;
                under_hundred = n;
            }

            printf("%d Hundred %d\n", n_hundred, under_hundred);
        }
    }
}

/*
int main()
{
    ft_descriptive_hundred(5);
    ft_descriptive_hundred(256);
    ft_descriptive_hundred(0);
    ft_descriptive_hundred(1000);
    ft_descriptive_hundred(-34);
    return (0);
}
*/
