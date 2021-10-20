/*

Write the function ft_uppercase that will take a string as an argument

The function must return its argument with all of its lowercase characters replaced by their uppercase equivalent

The function must be prototyped as follows:  char  *ft_uppercase(char *str);

Allowed functions:	none

Examples:

ft_uppercase("bonjour"); //returns "BONJOUR"
ft_uppercase("BoNjOuR"); //returns "BONJOUR"
ft_uppercase("1485"); //returns "1485"
ft_uppercase("1a4b8c5"); //returns "1A4B8C5"
ft_uppercase(""); //returns ""

*/

#include <stdio.h>
#include <string.h>

char *ft_uppercase(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

/*
int main()
{
    printf("%s\n", ft_uppercase(strdup("bonjour")));
    printf("%s\n", ft_uppercase(strdup("BoNjOuR")));
    printf("%s\n", ft_uppercase(strdup("1485")));
    printf("%s\n", ft_uppercase(strdup("1a4b8c5")));
    printf("%s\n", ft_uppercase(strdup("")));
    return (0);
}

*/
