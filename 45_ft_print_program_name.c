/*

Write a program which when executed will print its own name, followed by a newline character

Examples:

./mushka_program a b c
./babouche_program 14 56 79
./i_ran_out_of_names_program oki doc

Will produce the following output:

mushka_program
babouche_program
i_ran_out_of_names_program

Allowed functions:	write

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[]) 

{
    ft_putstr("Program name is: ");
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return 0;
}

