/*

Write the function ft_isspace that will copy the exact behaviour of the ctype.h function isspace

The function must be prototyped as follows:  int  ft_isspace(char c);

Allowed functions:	none

*/

#include <stdio.h>

int ft_isspace(char c)

{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f') // "t'es enerver frere" t\n\r\v\f
    {
        return (1);
    }

    return(0);
}

/*
int main ()
{
    printf("%d\n", ft_isspace(' '));
    printf("%d\n", ft_isspace('\t'));
    printf("%d\n", ft_isspace('\n'));
    printf("%d\n", ft_isspace('\r'));
    printf("%d\n", ft_isspace('\v'));
    printf("%d\n", ft_isspace('\f'));
    printf("%d\n", ft_isspace('a'));
    return(0);
}
*/
