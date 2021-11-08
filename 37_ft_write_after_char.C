/*

Write the function ft_write_after_char that takes a string and a character as arguments

The function must write the part of the string after the first occurence of its character argument

The output must be followed by a newline

If its string argument is a null pointer, it must not write anything

The function must be prototyped as follows:  void ft_write_after_char(char *str, char c);

Allowed functions:	write


Examples:

ft_write_after_char("Dima", 'i'); //will print "ma", followed by a newline
ft_write_after_char("Dima", 'D'); // will print "ima", followed by a newline
ft_write_after_char("Dima", 'G'); // will only print a newline character
ft_write_after_char("Dima", 'a'); // will only print a newline character
ft_write_after_char(NULL, 'o'); // will print nothing
ft_write_after_char("Dima", '\0'); //will only print a newline character
ft_write_after_char("Diiima", 'i'); // will print "iima" followed by a newline
ft_write_after_char("Dididima", 'd') // will print "idima" followed by a newline

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_write_after_char(char *str, char c)
{
    int i;
    i = 0;

    if (str == NULL)
    {
        return;
    }

    else if (str[i] != '\0')
    {

        while (str[i] != c && str[i] != '\0')
        {
            i++;
        }

        while (str[i] != '\0')
        {
            i++; // first skip 'i' then print till '\0'
            ft_putchar(str[i]);
        }
    }
    write(1, "\n", 1);
}

/*

int main()
{
    ft_write_after_char("Dima", 'i');     
    ft_write_after_char("Dima", 'D');     
    ft_write_after_char("Dima", 'G');     
    ft_write_after_char("Dima", 'a');     
    ft_write_after_char(NULL, 'o');      
    ft_write_after_char("Dima", '\0');    
    ft_write_after_char("Diiima", 'i');   
    ft_write_after_char("Dididima", 'd'); 
    return (0);
}

*/