/*

Write the function ft_write_backwards that takes a string and a character as arguments

The function must write the string backwards on the standard output stream, followed by a newline

If the string argument is a null pointer, the function must write "NULL" on standard output stream, followed by a newline

The function must be prototyped as follows:  void ft_write_backwards(char *str);

Allowed functions:	write

Examples:

ft_write_backwards("Dima"); // will print "amiD", followed by a newline
ft_write_backwards("raw"); // will print "war", followed by a newline
ft_write_backwards("god"); // will print "dog", followed by a newline
ft_write_backwards("0123456789"); // will print "9876543210", followed by a newline
ft_write_backwards("000"); // will print "000", followed by a newline
ft_write_backwards(NULL); // will print "NULL", followed by a newline

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_write_backwards(char *str)
{

    int i;
    i = 0;

    if (str == NULL) // check Null always first
    {
        write(1, "NULL", 5);
        return; // then stop
    }

    else if (str[0] == '\0') // str[0] == '\0' - emptry string
    {
        return; // do nothing
    }

    else
    {
        while (str[i] != '\0')
        {
            i++; // i = \0 
        }

        if (str[i] == '\0')
        {
            i--; // i = \0 -1 (in Dima i = 'a')
        }

        while (i >= 0) // till i(a) != 0(D)
        {
            ft_putchar(str[i]); // putchar
            i--;
        }
    }

    write(1, "\n", 1); // new line
}


/*

int main()
{

    int n = 4;
    int a = 45;
    char str2[5] = "Dima";
    char str3[1] = "";
    ft_write_backwards(str2);
    ft_write_backwards(str3);
    ft_write_backwards("Dima");
    ft_write_backwards("raw");       
    ft_write_backwards("god");        
    ft_write_backwards("0123456789"); 
    ft_write_backwards("000");        
    ft_write_backwards(NULL);         

    return (0);
}

*/