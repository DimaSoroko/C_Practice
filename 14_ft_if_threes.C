#include <stdio.h>

int ft_if_threes(int a, int b)
{
    
    if (a != 3 && b != 3)
    {
        return (0);
    }

    else if (a != 3 || b != 3)
    {
        return (1);
    }
    else 
    {
        return (2);
    }
}

/*
int main ()
{
    printf("%d\n", ft_if_threes(1,1));
    printf("%d\n", ft_if_threes(3,0));
    printf("%d\n", ft_if_threes(3,3));
    return(0);
}
*/