#include <stdio.h>

char *ft_mushka(void)
{
    char str[] = "Mushka is cute\n";
    // printf("%s", str);
    return str; // ??? warning: address of local variable 'str' returned [-Wreturn-local-addr]
}

/*
int main()
{
    ft_mushka;
}
*/