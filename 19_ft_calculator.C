/*
Write the function ft_calculator that will take two integers and a character as arguments

The function must return the result of the operation performed on two integers

The operation will depend on the character argument:

If the character is "+", add the first integer to the second (a + b)
If the character is "-", substract the second integer from the first (a - b)
If the character is "*", multiply the first integer by the second (a * b)
If the character is "/", divide the first integer by the second (a / b)
If the character is "%", return the rest of the division a / b

The function must be prototyped as follows:
int ft_calculator(int a, char operation, int b);
*/

#include <stdio.h>

int ft_calculator(int a, char operation, int b)
{
    int result;
    if (operation == '+')
    {
        result = a + b;
    }
    else if (operation == '-')
    {
        result = a - b;
    }
    else if (operation == '*')
    {
        result = a * b;
    }
    else if (operation == '/')
    {
        result = a / b;
    }
    else if (operation == '%')
    {
        result = a % b;
    }

    return (result);
}

/*
int main()
{
    printf("%d\n", ft_calculator(5, '+', 5));
    printf("%d\n", ft_calculator(5, '-', 5));
    printf("%d\n", ft_calculator(5, '*', 5));
    printf("%d\n", ft_calculator(5, '/', 5));
    printf("%d\n", ft_calculator(5, '%', 5));

    return (0);
}
*/