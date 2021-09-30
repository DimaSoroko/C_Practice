#include <stdio.h>

int ft_sign(int n)
{
    if (n > 0)
    {
        return (1);
    }
    else if (n < 0)
    {
        return (-1);
    }
    else
    {
        return (0);
    }
}

/*
int main()
{
    printf("%d\n", ft_sign(1));
    printf("%d\n", ft_sign(-1));
    printf("%d\n", ft_sign(0));

    return (0);
}
*/