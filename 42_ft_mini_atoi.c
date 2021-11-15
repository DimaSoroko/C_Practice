/*

Write the function ft_mini_atoi that takes a string as an argument

The function must be prototyped as follows:  int ft_mini_atoi(char *str);

The function must return the corresponding integer representation of its string argument

The string will be formatted as follows:
[s][d] where:
[s] is a character '-' or nothing
[d] is any amount of digits

For example these are all possible arguments:
"-124"
"0"
"632"

The function will never be tested with invalid arguments such as:
"abc"
"+86"
" 32"
If its argument is a null pointer, it must return 0

You don't need to handle the overflows, but you must handle the maximum and minimum integer values.

Examples:
ft_mini_atoi(NULL); //will return 0
ft_mini_atoi("123"); //will return 123
ft_mini_atoi("-789"); //will return -789
ft_mini_atoi("-0"); //will return 0

Allowed functions:	none

*/

#include <stdio.h>

int ft_mini_atoi(char *str)
{
    int i;
    int sign;
    int res;
    i = 0;
    sign = 1;
    res = 0;
    if (str == NULL)
    {
        return (0);
    }

    else
    {
        if ((str[0] == '-'))
        {
            sign = -1;
            i++;
        }
        while (str[i] != '\0')
        {
            res = res * 10 + (str[i] - '0'); // '0' = 48(ascii), 1 = 49(ascii), 49 - 48 = 1
            //res = 0 * 10 + (49-48) = 1 so str[0] = 1
            // then res = 1 * 10 + (50 -48) = 2 so str[1] = 2
            // etc till '\0'
            i++;
        }
        return (sign * res);
    }
}

/*

int main()
{
    printf("%d\n", ft_mini_atoi(NULL));
    printf("%d\n", ft_mini_atoi("123"));
    printf("%d\n", ft_mini_atoi("-789"));
    printf("%d\n", ft_mini_atoi("-0"));

    return (0);
}

*/
