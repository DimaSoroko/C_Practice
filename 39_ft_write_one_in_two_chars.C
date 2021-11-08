/*

Write the function ft_write_one_in_two_chars that takes a string as its argument

The function must write every one out of two characters starting from the first

If the argument is a null pointer, the function must write "NULL" on standard output stream

If the argument is an empty string, the function must write "Empty string" on standard output stream

In all the above cases, the final output must be followed by a newline character

The function must be prototyped as follows:  void ft_write_one_in_two_chars(char *str);

Allowed functions:	write

Examples:

ft_write_one_in_two_chars("Dima"); // will print "Dm", followed by a newline
ft_write_one_in_two_chars("raw"); // will print "rw", followed by a newline
ft_write_one_in_two_chars("god"); // will print "gd", followed by a newline
ft_write_one_in_two_chars("0123456789"); // will print "02468", followed by a newline
ft_write_one_in_two_chars(""); // will print "Empty string", followed by a newline
ft_write_one_in_two_chars(NULL); // will print "NULL", followed by a newline

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_write_one_in_two_chars(char *str)
{
    int i;
    i = 0;

    if (str == NULL)
    {
        write(1, "NULL\n", 6); // need '\n' cos return stops the function
        return;
    }

    else if (str[0] == '\0')
    {
        write(1, "Empty string", 13);
    }

    else
    {
        while (str[i] != '\0')
        {

            if (i % 2 != 0) // if 'i' is odd number
            {
                i++;
            }

            if (str[i] != '\0')
            {
                ft_putchar(str[i]);
                i++;
            }
        }
    }

    write(1, "\n", 1);
}

int main()
{
    ft_write_one_in_two_chars("Dima");
    ft_write_one_in_two_chars("raw");
    ft_write_one_in_two_chars("god");
    ft_write_one_in_two_chars("0123456789");
    ft_write_one_in_two_chars("");
    ft_write_one_in_two_chars(NULL);
    return (0);
}
