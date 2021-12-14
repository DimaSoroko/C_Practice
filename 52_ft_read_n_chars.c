/*

Write a program that will have two arguments

The first argument represents the name of the file in the same repository as your ".c" file

The second argument represents the number of characters you will have to read in this file

You need to read and and print all the read characters on the standard output

Before exiting, your program must close the file if it was opened

Error handling:

For any of the following cases your program must return 1 (and print nothing!):

You have a wrong number of arguments
The number of characters you need to read is 0 or bigger than 1024
It's impossible to open the given file
A call to "close" function fails
Otherwise, it must return 0

Example:

Imagine a simple file named "text.txt" with the following contents:
0123456789 abcdefghi
These are the results of different uses of your program:
./a.out text.txt 1 # will print "0"
./a.out text.txt 3 # will print "012"
./a.out text.txt 10 # will print "0123456789"
./a.out text.txt 500 # will print "0123456789 abcdefghi"
./a.out text.txt abc # will print nothing
Tips:

Since your program doesn't read more than 1024 characters, you can declare a string used in "read" function with
char  buf[1024];
The files can be removed by using the command "rm file_name" (be careful with it!)
You must compile your code using gcc with flags "-Wall -Wextra -Werror"

Allowed functions:	open, read, close, printf

*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
    {

        return (1);
    }

    return (0);
}

int ft_real_atoi(char *str)
{

    int i;
    int sign;
    int res;
    i = 0;
    sign = 1;
    res = 0;

    if (str == NULL)
    {
        return (0);
    }

    else
    {
        while ((ft_isspace(str[i]) == 1))
        {
            i++;
        }

        if (str[0] == '-')
        {
            sign = -1;
            i++;
        }

        if (str[0] == '+')
        {
            i++;
        }

        while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0') // while less then 57 and more then 48 (all digest)
        {
            res = res * 10 + (str[i] - '0'); // '0' = 48(ascii), 1 = 49(ascii), 49 - 48 = 1
            //res = 0 * 10 + (49-48) = 1 so str[0] = 1
            // then res = 1 * 10 + (50 - 48) = 2 so str[1] = 2
            // etc till '\0'

            i++;
        }

        return (sign * res);
    }
}

int main(int argc, char **argv)
{
    char buf[1024];
    int file;
    int read_ret; // variable for saving "read" result
    if (argc != 3)
    {
        return (1);
    }

    /* write */

    file = open(argv[1], O_RDONLY, 00400); // creat file from argv[1] with Read/Write/Execute rights
    if (file == -1)                               // if unable to open file
    {
        return (1);
    }

    /* read */
    int read_n_chars; // variable to save the result of argv[2] and then check for errors less or equal then '0' or more then '1024'
    read_n_chars = ft_real_atoi(argv[2]);
    read_ret = read(file, buf, read_n_chars); // will read n_chars(argv[2]) from buffer file (argv[1])
    if (read_ret == -1 || read_n_chars <= 0 || read_n_chars > 1024)
    {
        return (1); // if unable to read file
    }
    buf[read_ret] = '\0'; // puts "\0" at the end of the string
    printf("%s\n", buf);
    if (close(file) == -1)
    {
        return (1); // first will close then will check return
    }

    return (0);
}
