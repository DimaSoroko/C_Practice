/*

Write the function ft_strjoin that will take two strings as arguments

It must return a new string allocated on the heap and resulted in two strings concatenated

In case of an error or a NULL argument your must return a NULL pointer

The function must be prototyped as follows: char *ft_strjoin(char *prefix, char *suffix);

Example:

ft_strjoin("a", "b"); // will return "ab"

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

char *ft_strjoin(char *prefix, char *suffix)
{
    int i;
    int j;
    i = 0;
    j = 0;
    char *allocated_return;
    int allocated_length;
    allocated_length = ft_strlen(prefix) + ft_strlen(suffix); // need a length of both strings
    allocated_return = malloc(allocated_length * sizeof(char) + 1); // +1 for null pointer
    if (allocated_return == 0)
    {
        return (0);
    }
    while (prefix[i] != '\0')
    {
        allocated_return[i] = prefix[i]; // first copy all the element of first string
        i++;
    }
    while (suffix[j] != '\0')
    {
        allocated_return[i] = suffix[j]; // then copy second string
        i++;
        j++;
    }
    allocated_return[i] = '\0';

    return (allocated_return);
}

/*
int main()
{
    char *allocated_return;
    char *a = "a";
    char *b = "b";
    allocated_return = ft_strjoin(a, b);
    printf("%s\n", allocated_return);
    return (0);
}

*/