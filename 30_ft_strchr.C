/*

Write the function ft_strchr that will copy the exact behaviour of the function strchr

The function must be prototyped as follows:  char *ft_strchr(const char *s, int c);

Allowed functions:	none

*/

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    int result;
    while (s[i] != '\0' && s[i] != c) // reads whole string till 'c'
    {
        i++;
    }
    if (s[i] == c) // if any element == 'c'
    {
        return (char *)&s[i]; // conver const char* to char, returns pointer to s[i]
    }
}


/*

int main()
{
    if (ft_strchr("hello", 'a') == NULL)
    {
        printf("%s\n", "NULL");
    }
    printf("%s\n", ft_strchr("hello", 'l'));
    return 0;
}

*/
