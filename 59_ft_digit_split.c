/*

Write the function ft_digit_split that will take a string as an argument

It must return an array of integers, where every element will be the integer represented by the corresponding character of its argument

If the string contains a non digit character, return a NULL pointer

You cannot have any memory leaks!

The function must be prototyped as follows: int *ft_digit_split(char *str);

Example:

ft_digit_split("0123"); // will return the following array: [0 , 1 , 2 , 3]
ft_digit_split("abc"); // will return NULL

Allowed functions:	malloc, free

*/

#include <stdlib.h>
#include <stdio.h>

int non_digit(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if ((str[i] < '0' || str[i] > '9'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int *ft_digit_split(char *str)
{
    int i;
    i = 0;
    int *array;

    if ((non_digit(str)) == 0)
    {
        return (0);
    }
    array = malloc(ft_strlen(str) * sizeof(int));

    while (i < ft_strlen(str))
    {
        array[i] = str[i] - 48; // - 48(char '0') to convert ascii to int
        i++;
    }

    return (array);
}

int main()
{
    int i;
    i = 0;
    char *str = "123";
    int str_len;
    str_len = ft_strlen(str);
    int *array;
    array = ft_digit_split(str);
    if (!array)
        printf("NULL\n");
    else
    {
        while (i < str_len)
        {
            printf("[%d]", array[i]);
            i++;
        }
    }

    printf("\n");

    return (0);
}