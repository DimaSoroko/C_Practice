/*

Write the function ft_strcmp that will copy the exact behaviour of the function strcmp

The function must be prototyped as follows: int  ft_strcmp(const char *s1, const char *s2);

Allowed functions:	none

*/

#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    i = 0;
    int result;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            result = -1;
            return (result);
        }
        else if (s1[i] > s2[i])
        {
            result = 1;
            return (result);
        }
        else
        {
            result = 0;
            return (result);
        }
        i++;
    }
    return (result);
}

int main()
{
    printf("%s\n", ft_strcmp("hello", "hello"));
    return (0);
}