/*

Write the function ft_write_first_word that a string as an argument

The function must write the first string present in its argument on standard output stream, followed by a newline

If its argument is a null pointer, it must write "Error", followed by a newline on standard error stream, followed by a newline

A "word" is the part of the string delimited by its start, its end and all the characters for which isspace function returns non-zero

The function must be prototyped as follows:  void ft_write_first_word(char *str);

Allowed functions:	write

Examples:

ft_write_first_word("Bonjour"); //will write "Bonjour\n" on standard output stream
ft_write_first_word("Bon jour"); //will write "Bon\n" on standard output stream
ft_write_first_word("Bon\tjour"); //will write "Bon\n" on standard output stream
ft_write_first_word(""); //will write "\n" on standard output stream
ft_write_first_word("         "); //will write "\n" on standard output stream
ft_write_first_word("\r\r\r\r"); //will write "\n" on standard output stream
ft_write_first_word(" Bon jour"); //will write "Bon\n" on standard output stream
ft_write_first_word(" Bonjour"); //will write "Bonjour\n" on standard output stream
ft_write_first_word("NULL"); //will write "Error\n" on standard error stream


*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
    {

        return (1);
    }

    return (0);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_write_first_word(char *str)
{

    int i;
    i = 0;
    if (str[i] != ft_isspace(str[i]) && str != NULL) // str[i] != ' ' || str[i] != '\t' || str[i] != '\n' || str[i] != '\r' || str[i] != '\v' || str[i] != '\f'
    {
        write(2, str, ft_strlen(str));
        write(1, "\n", 1);
    }
    
}

int main()
{
    ft_write_first_word("Bonjour");   //will write "Bonjour\n" on standard output stream
    ft_write_first_word("Bon jour");  //will write "Bon\n" on standard output stream
    ft_write_first_word("Bon\tjour"); //will write "Bon\n" on standard output stream
    ft_write_first_word("");          //will write "\n" on standard output stream
    ft_write_first_word("         "); //will write "\n" on standard output stream
    ft_write_first_word("\r\r\r\r");  //will write "\n" on standard output stream
    ft_write_first_word(" Bon jour"); //will write "Bon\n" on standard output stream
    ft_write_first_word(" Bonjour");  //will write "Bonjour\n" on standard output stream
    ft_write_first_word("NULL");      //will write "Error\n" on standard error stream

    return (0);
}
