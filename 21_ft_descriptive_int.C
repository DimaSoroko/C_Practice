/*
Write the function ft_descriptive_int that will take an integer as an argument

The function must print the integer following the format:

n_milliards Milliards n_millions Millions n_thousand Thousand n_hundred Hundred under_hundred
To approach the real world calling, if the integer is composed of 0 Milliards/Millions/Thousands etc, you will not actually write "0 Milliards/Millions/Thousands"

The function must be prototyped as follows: void ft_descriptive_int(int n);

Examples:
// Call 1
ft_descriptive_int(-2147483648);
# Output 1 (-2.147.483.648)
-2 Milliards 147 Millions 483 Thousand 6 Hundred 48
// Call 2 
ft_descriptive_int(480000);
# Output 2 (480.000)
480 Thousand
// Call 3
ft_descriptive_int(0);
# Output 3
// Call 4
ft_descriptive_int(8068);
# Output 4 (8.068)
8 Thousand 68

*/

#include <stdio.h>

void ft_descriptive_int(int n)
{
    int n_milliards, n_millions, n_thousand, n_hundred, under_hundred;

    if (n >= 1000000000 && n >= 1000000)
    {
        n_milliards = n / 1000000000;
        n_millions = n % 1000000000 / 1000000;
        n_thousand = n % 1000000 / 1000;
        n_hundred = n % 1000 / 100;
        under_hundred = n % 100;
        printf("%d Milliars %d Millions %d Thousands %d Hundreds %d\n", n_milliards, n_millions, n_thousand, n_hundred, under_hundred);
    }

    else if (n <= 1000000000 && n >= 1000000)
    {

        n_millions = n % 1000000000 / 1000000;
        n_thousand = n % 1000000 / 1000;
        n_hundred = n % 1000 / 100;
        under_hundred = n % 100;
        printf("%d Millions %d Thousands %d Hundreds %d\n", n_millions, n_thousand, n_hundred, under_hundred);
    }
    else if (n < 1000000 && n >= 1000)
    {
        n_thousand = n % 1000000 / 1000;
        n_hundred = n % 1000 / 100;
        under_hundred = n % 100;
        printf("%d Thousands %d Hundreds %d\n", n_thousand, n_hundred, under_hundred);
    }
    else if (n < 1000 && n >= 100)
    {
        n_hundred = n % 1000 / 100;
        under_hundred = n % 100;
        printf("%d Hundreds %d\n", n_hundred, under_hundred);
    }
    else if (n < 100 && n > 0)
    {
        under_hundred = n % 100;
        printf("%d\n", under_hundred);
    }

    else if (n < 0)
    {
        n_milliards = n / 1000000000;
        n_millions = n % 1000000000 / 1000000;
        n_thousand = n % 1000000 / 1000;
        n_hundred = n % 1000 / 100;
        under_hundred = n % 100;
        printf("%d Milliars %d Millions %d Thousands %d Hundreds %d\n", n_milliards, n_millions, n_thousand, n_hundred, under_hundred);
    }
}

int main()
{
    ft_descriptive_int(1100000000);
    ft_descriptive_int(999999999);
    ft_descriptive_int(999999);
    ft_descriptive_int(999);
    ft_descriptive_int(0);
    ft_descriptive_int(-1200200200);
    return (0);
}
