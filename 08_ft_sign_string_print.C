#include<unistd.h>

void ft_sign_string_print(int n)
{
    if (n > 0)
    {
        write (1,"Positive", 8);
        write (1, "\n", 1);
    }
    else if (n < 0)
    {
        write (1, "Negative", 8);
        write (1, "\n", 1);
    }
    else 
    {
        write (1, "Zero", 4);
        write (1, "\n", 1);
    }
}
/*
int main ()
{
    ft_sign_string_print(1);
    ft_sign_string_print(-1);
    ft_sign_string_print(0);
    return (0);
}
*/