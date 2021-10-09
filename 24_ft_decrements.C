/*

The code below is incomplete and won't compile!
Fix it without removing anything from it so that it compiles and produces the following output:
ft_decrement_one_ret: [1]
ft_decrement_two_ret: [0]
ft_decrement_three_ret: [1]
ft_decrement_four_ret: [0]

*/

#include <stdio.h>

int ft_decrement_one(int n)
{
    int return_value;
    return_value = n;
    n = n - 1;

    return (return_value);
}

int ft_decrement_two(int n)
{
    int return_value;
    n = n - 1;
    return_value = n;

    return (return_value);
}

int ft_decrement_three(int n)
{
    int return_value;
    return_value = n--;

    return (return_value);
}

int ft_decrement_four(int n)
{
    int return_value;
    return_value = --n;

    return (return_value);
}

int main(void)
{
    int d = 1;
    int ft_decrement_one_ret = ft_decrement_one(d);
    int ft_decrement_two_ret = ft_decrement_two(d);
    int ft_decrement_three_ret = ft_decrement_three(d);
    int ft_decrement_four_ret = ft_decrement_four(d);
    printf("ft_decrement_one_ret: [%d]\n", ft_decrement_one_ret);     // 1
    printf("ft_decrement_two_ret: [%d]\n", ft_decrement_two_ret);     // 0
    printf("ft_decrement_three_ret: [%d]\n", ft_decrement_three_ret); // 1
    printf("ft_decrement_four_ret: [%d]\n", ft_decrement_four_ret);   // 0

    return (0);
}