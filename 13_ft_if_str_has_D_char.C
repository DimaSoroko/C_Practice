#include <stdio.h>

int ft_if_str_has_D_char(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {

        if (str[i] == 'D') // if any element of the string == 'D'
        {
            return (1);
        }
        i++;
    }

    return (0); // if none of element of the string == 'D'

}

/*
int main()
{
    printf("%d\n", ft_if_str_has_D_char("sfsDdf"));
    printf("%d\n", ft_if_str_has_D_char("yuikyuim"));
    return (0);
}
*/