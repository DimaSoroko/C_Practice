/*
In the code below you have an incomplete couple of functions
Replace only the commented out lines inside the functions scope to produce the following output:
2
2
4
3
-2
*/

#include <stdio.h>

/// This function will transform its digit argument
/// to a character and return the character equivalent
/// Example: ft_digit_to_char(9) = '9'
char ft_digit_to_char(int n)
{
    char returned_char;

    returned_char = n +'0';
    return (returned_char);
}

/// This function will return twice the value of its argument
/// Example: ft_double_value(9) = 18
int ft_double_value(int n)
{
    int returned_value;

    returned_value = n * 2;
    return (returned_value);
}

/// This function return its argument incremented (n++)
int ft_my_increment(int n)
{
    int returned_value;
    returned_value = n + 1;
    return (returned_value);
}

/// This function return its argument but with opposite sign
/// Example: ft_double_value(9) = -9
/// Example: ft_double_value(-9) = 9
int ft_opposite_sign(int n)
{
    int returned_value;

    returned_value = -n;
    return (returned_value);
}

int main(void)
{
    int d;
    char ft_digit_to_char_ret;
    int ft_double_value_ret;
    int ft_my_increment_ret;
    int ft_opposite_sign_ret;

    d = 2;
    ft_digit_to_char_ret = ft_digit_to_char(d);
    ft_double_value_ret = ft_double_value(d);
    ft_my_increment_ret = ft_my_increment(d);
    ft_opposite_sign_ret = ft_opposite_sign(d);
    printf("d: [%d]\n", d);                                       // 2
    printf("ft_digit_to_char_ret: [%c]\n", ft_digit_to_char_ret); // 2
    printf("ft_double_value_ret: [%d]\n", ft_double_value_ret);   // 4
    printf("ft_my_increment_ret: [%d]\n", ft_my_increment_ret);   // 3
    printf("ft_opposite_sign_ret: [%d]\n", ft_opposite_sign_ret); // -2

    return (0);
}
