/*

Write the function ft_real_atoi that takes a string as an argument
It will reproduce the exact behavious of the <stdlib.h> function atoi
The function must be prototyped as follows:  int ft_real_atoi(char *str);

The function must return the corresponding integer representation of its string argument
There is no restrictions on its argument, but in order to be converted the string will be formatted as follows:
[spaces][sign][digits][any non digits][anything] where:
- [spaces] is any amount of spaces (spaces being defined as in isspace function)
- [sign] is either a '+' or a '-' character (will not always be present)
- [digits] is any amount of digits
- [any non digits] is any amount of non digits
- [anything] is any amount of any characters
For example these are all possible arguments:

" \t-124a64"
"\r+000000\v"
"632"
"\f \f"
"1000000000000000000000"
"-1000000000000000000000"
"abc18"
"+4294967296"
"+-+-+-+-+-1234567890+-+-+-+-+-"
If its argument is a null pointer, it must return 0

The overflows must work as in real atoi function

Examples: You can use the real atoi function to see how it interacts with different arguments

Allowed functions:	none

*/

#include <stdio.h>

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
    {

        return (1);
    }

    return (0);
}

int ft_real_atoi(char *str)
{

    int i;
    int sign;
    long res;
    i = 0;
    sign = 1;
    res = 0;

    if (str == NULL)
    {
        return (0);
    }

    else
    {
        while ((ft_isspace(str[i]) == 1))
        {
            i++;
        }
        if (str[0] == '-')
        {
            sign = -1;
            i++;
        }
        if (str[0] == '+')
        {
            i++;
        }

        while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0') // less then 57 and more then 48 (all non digest)
        {
            res = res * 10 + (str[i] - '0');
            i++;
        }

        return (sign * res);
    }
}

int main()
{
    printf("%d\n", ft_real_atoi(NULL));
    printf("%d\n", ft_real_atoi("\t-124a64"));
    printf("%d\n", ft_real_atoi("\r+000000\v"));
    printf("%d\n", ft_real_atoi("632"));
    printf("%d\n", ft_real_atoi("\f \f"));
    printf("%d\n", ft_real_atoi("1000000000000000000000"));
    printf("%d\n", ft_real_atoi("-1000000000000000000000"));
    printf("%d\n", ft_real_atoi("abc18"));
    printf("%d\n", ft_real_atoi("+4294967296"));
    printf("%d\n", ft_real_atoi("+-+-+-+-+-1234567890+-+-+-+-+-"));
    return (0);
}
