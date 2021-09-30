#include <stdio.h>

char ft_sign_char(int n)
{
    if (n > 0)
    {
        return ('+');
    }
    else if (n < 0)
    {
        return ('-');
    }
    else 
    {
        return('0');
    }
}
/*
int main ()
{
    printf("%c\n", ft_sign_char(1));
    printf("%c\n", ft_sign_char(-1));
    printf("%c\n", ft_sign_char(0));
    return (0);
}
*/