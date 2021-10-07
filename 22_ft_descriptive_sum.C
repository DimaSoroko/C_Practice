/*
Write the function ft_descriptive_sum that will take an integer as an argument

The integer passed as an argument will belong to a range [0, 999]

The function must print the integer following the format:

x_hundred + y_tens + z_digits
The function must only call printf once with the following arguments:

// Note: You are free to name variables as you wish
printf("%d + %d + %d\n", x_hundred, y_tens, z_digits);
If the integer argument is outside range [0, 999], nothing needs to be printed

The function must be prototyped as follows: void ft_descriptive_sum(int n);

Examples:

// Call 1
ft_descriptive_sum(456);
# Output 1
400 + 50 + 6

// Call 2
ft_descriptive_sum(32);
# Output 2
0 + 30 + 2

// Call 3
ft_descriptive_sum(0);
# Output 3
0 + 0 + 0

*/
#include <stdio.h>

void ft_descriptive_sum(int n)
{
    int x_hundred, y_tens, z_digits;
    if (n <= 999)
    {
        if (n >= 0)
        {
            x_hundred = n / 100 * 100;
            y_tens = n % 100 - n % 10;
            z_digits = n % 10;

            printf("%d + %d + %d\n", x_hundred, y_tens, z_digits);
        }
    }
}


/*
int main()
{
    ft_descriptive_sum(0);
    ft_descriptive_sum(32);
    ft_descriptive_sum(456);
    ft_descriptive_sum(10000);
    ft_descriptive_sum(-585);
    return (0);
}
*/