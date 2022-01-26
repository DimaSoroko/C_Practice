/*

Write the function ft_strdup that will copy the exact behaviour of the function strdup

The function must return a copy of its argument allocated on the heap

The function must be prototyped as follows: char *ft_strdup(char *src)

Allowed functions:	malloc

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    char *dest;
    int i;
    i = 0;
    dest = malloc(ft_strlen(src) *sizeof(char) + 1); // +1 for \0

    if (dest == 0)   
    {
        return (0);
    }
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

/*
int main()
{
    char *str;
    char *allocated_str;
    str = "Hello";
    allocated_str = ft_strdup(str);
    printf("%s\n", allocated_str);
    allocated_str = strdup(str); // real strdup to compare
    printf("%s\n", allocated_str);
   
}
*/
