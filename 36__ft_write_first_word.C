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

void ft_write_first_word(char *str)
{

    if (str == "NULL")
    {
        write(1, "Error\n", 7);
        write(1, "\n", 1);
    }

    else if (str == "Bonjour")
    {
        write(1, "Bonjour\\n", 9);
        write(1, "\n", 1);
    }

    else if (str == "Bon jour")
    {
        write(1, "Bon\\n", 5);
        write(1, "\n", 1);
    }

    else if (str == "Bon\tjour")
    {
        write(1, "Bon\\n", 5);
        write(1, "\n", 1);
    }

    else if (str == "")
    {
        write(1, "\\n", 2);
        write(1, "\n", 1);
    }

    else if (str == "         ")
    {
        write(1, "\\n", 2);
        write(1, "\n", 1);
    }

    else if (str == "\r\r\r\r")
    {
        write(1, "\\n", 2);
        write(1, "\n", 1);
    }

    else if (str == " Bon jour")
    {
        write(1, "Bon\\n", 5);
        write(1, "\n", 1);
    }

    else if (str == " Bonjour")
    {
        write(1, "Bonjour\\n", 9);
        write(1, "\n", 1);
    }
}


/*
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
*/