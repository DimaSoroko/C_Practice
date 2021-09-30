#include <unistd.h>

void ft_sign_char_print(int n)
{
    if (n > 0)
    {
        write(1, "+", 1);
        write(1, "\n", 1);
    }
    else if (n < 0)
    {
        write(1, "-", 1);
        write(1, "\n", 1);
    }
    else 
    {
        write(1, "0", 1);
        write(1, "\n", 1);
    }
}
/*
int main ()
{
    ft_sign_char_print(1);
    ft_sign_char_print(-1);
    ft_sign_char_print(0);
    return (0);
}
*/