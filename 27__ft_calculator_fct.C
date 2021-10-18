/*

Write the function ft_calculator_fct that will take two integers and a character as arguments

The function must return the result of the operation performed on two integers

The operation will depend on the character argument:

If the character is "+", add the first integer to the second (a + b)
If the character is "-", substract the second integer from the first (a - b)
If the character is "*", multiply the first integer by the second (a * b)
If the character is "/", divide the first integer by the second (a / b)
If the character is "%", return the rest of the division a / b
If the character is different from those mentionned above, return 0
int ft_calculator_fct(int a, char operation, int b);

You have already wrote this function. The only new condition is that there must be a subfunction for every operation

Addition / substraction / multiplication / division / modulo and error
The main function must use the return values of these subfunctions to return its own value. No operation can be performed in ft_calculator_fct itself

Examples:

ft_calculator_fct(3, '+', 2); //returns 5
ft_calculator_fct(3, '-', 2); //returns 1
ft_calculator_fct(9, '*', 5); //returns 45
ft_calculator_fct(9, '/', 5); //returns 1
ft_calculator_fct(9, '%', 5); //returns 4
ft_calculator_fct(9, 'a', 5); //returns 0


Allowed functions:	none


*/

#include <stdio.h>

int ft_addition(int a, int b)
{
    int result;
    result = a + b;
    return (result);
}

int ft_subtraction(int a, int b)
{
    int result;
    result = a - b;
    return (result);
}

int ft_multiplication(int a, int b)
{
    int result;
    result = a * b;
    return (result);
}

int ft_division(int a, int b)
{
    int result;
    result = a / b;
    return (result);
}

int ft_remainder(int a, int b)
{
    int result;
    result = a % b;
    return (result);
}

int ft_wrong_char()
{
    return (0);
}

int ft_calculator_fct(int a, char operation, int b)
{
    if (operation == '+')
    {
        return (ft_addition(a, b));
    }

    else if (operation == '-')
    {
        return (ft_subtraction(a, b));
    }

    else if (operation == '*')
    {
        return (ft_multiplication(a, b));
    }
    else if (operation == '/')
    {
        return (ft_division(a, b));
    }

    else if (operation == '%')
    {
        return (ft_remainder(a, b));
    }

    else
    {
        return (ft_wrong_char());
    }
}


/*
int main()
{
    printf("%d\n", ft_calculator_fct(3, '+', 2));
    printf("%d\n", ft_calculator_fct(3, '-', 2));
    printf("%d\n", ft_calculator_fct(9, '*', 5));
    printf("%d\n", ft_calculator_fct(9, '/', 5));
    printf("%d\n", ft_calculator_fct(9, '%', 5));
    printf("%d\n", ft_calculator_fct(9, 'a', 5));
    return (0);
}

*/