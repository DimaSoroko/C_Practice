#include <stdio.h>

int ft_if_zeroes(int a, int b)
{
    
    if (a != 0 && b != 0)
    {
        return (0);
    }

    else if (a != 0 || b != 0) 
    {
        return (1);
    }
    else 
    {
        return (2);
    }
}


int main()
{
    printf("%d\n", ft_if_zeroes(3, 1));
    printf("%d\n", ft_if_zeroes(1, 0));
    printf("%d\n", ft_if_zeroes(0, 0));
}
