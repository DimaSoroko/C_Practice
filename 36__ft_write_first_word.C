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

void ft_write_first_word(char *str)
{

    int i;
    i = 0;

    if (str == NULL)
    {
        write(2, "Error\n", 7);
        return;
    }
    
    else
    {
        while ((ft_isspace(str[i]) == 1) && str[i] != '\0') // ft_isspace returns 1
        {
            i++;
        }

        while ((ft_isspace(str[i]) == 0) && str[i] != '\0') // ft_isspace returns 0
        {
            ft_putchar(str[i]);
            i++;
        }
    }

    write(1, "\n", 1);
}

/*

int main()
{
    ft_write_first_word("Bonjour");   
    ft_write_first_word("Bon jour");  
    ft_write_first_word("Bon\tjour"); 
    ft_write_first_word("");          
    ft_write_first_word("         ");
    ft_write_first_word("\r\r\r\r");  
    ft_write_first_word(" Bon jour"); 
    ft_write_first_word(" Bonjour");  
    ft_write_first_word(NULL);        
    return (0);
}

*/


