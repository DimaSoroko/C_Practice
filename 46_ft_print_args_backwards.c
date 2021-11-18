/*

Write a program which when executed will print all its arguments in reverse order

Examples:
./your_program_name a b c
./your_program_name
./your_program_name 14 56 79
./your_program_name oki doc

Will produce the following output:
c b a

79 56 14
doc oki

Allowed functions:	write

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)

{
    int i;
    i = 0;
    while (argv[i] != '\0')
    {
        i++;
    }
    if (argv[i] == '\0')
    {
        i--;
    }
    while (i != 0)
    {
        ft_putstr(argv[i]);
        write(1, " ", 1);
        i--;
    }
    
    return 0;
}