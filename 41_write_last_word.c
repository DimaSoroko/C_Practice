/*

Write the function ft_write_last_word that takes a string as an argument

The function must write the last word present in its argument on standard output stream, followed by a newline

If its argument is a null pointer, it must write "Error", followed by a newline on standard error stream

A "word" is the part of the string delimited by its start, its end and all the characters for which isspace function returns non-zero

The function must be prototyped as follows:  void ft_write_last_word(char *str);

Allowed functions:	write

Examples:

ft_write_last_word(NULL); //will write "Error" on standard error stream
ft_write_last_word("Bonjour"); //will write "Bonjour" on standard output stream
ft_write_last_word("Bon jour"); //will write "jour" on standard output stream
ft_write_last_word("Bon\tjour"); //will write "jour" on standard output stream
ft_write_last_word(""); //will write a newline on standard output stream
ft_write_last_word("         "); //will write a newline on standard output stream
ft_write_last_word("\r\r\r\r"); //will write a newline on standard output stream
ft_write_last_word(" Bon jour"); //will write "jour" on standard output stream
ft_write_last_word("   Bonjour"); //will write "Bonjour" on standard output stream
ft_write_last_word("Bonjour  "); //will write "Bonjour" on standard output stream
ft_write_last_word("  abra ka dabra  "); //will write "dabra" on standard output stream

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
    {

        return (1);
    }

    return (0);
}

void ft_write_last_word(char *str)
{
    int i;
    i = 0;
    if (str == NULL)
    {
        write(1, "Error\n", 7);
        return;
    }
    else
    {
        while (str[i] != '\0') // reads whole string
        {
            i++;
        }

        if (str[i] == '\0' && i != 0) // i is at '\0' then i--;
        {
            i--;
        }

        while ((ft_isspace(str[i]) == 1) && i != 0) // go backwards if there is any whitespace till first char
        {
            i--;
        }

        while ((ft_isspace(str[i]) == 0) && i != 0) // go backwards if there is no whitespace till first char
        {
            i--;
        }

        if ((ft_isspace(str[i]) == 1)) // i is at white space
        {

            i++;
        }

        while (str[i] != '\0') // i is at the first char of the last word
        {
            ft_putchar(str[i]);
            i++;
        }
    }

    write(1, "\n", 1);
}

int main()
{

    ft_write_last_word("Bonjour");
    ft_write_last_word("Bon jour");
    ft_write_last_word("Bon\tjour");
    ft_write_last_word("");
    ft_write_last_word("         ");
    ft_write_last_word("\r\r\r\r");
    ft_write_last_word(" Bon jour");
    ft_write_last_word("   Bonjour");
    ft_write_last_word("Bonjour  ");
    ft_write_last_word("  abra ka dabra  ");
    ft_write_last_word(NULL);
    return (0);
}
