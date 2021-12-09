/*

Write the program that takes two arguments

The program must create a file with the name of its first parameter and write inside its second parameter

Example:
./a.out "diary.txt" "darkest secret" # will create a file named "diary.txt" and write "darkest secret" inside
If the file already exists, it must truncate it (delete its contents) and overwrite them

Before exiting, your program must close the file if it was opened

Your program must return 1 in following cases:

The program has less than or more than 2 arguments
A call to open, write or close results in an error
Otherwise, it must return 0

Tips:

The files can be removed by using the command "rm file_name" (be careful with it!)
You must compile your code using the command "gcc -Wall -Wextra -Werror ft_files.c"

Allowed functions:	open, write, close

*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int file;
    if (argc != 3)
    {
        return (1);
    }
    else
    {
        file = open(argv[1], O_WRONLY | O_CREAT); // will create a new file as argv[1], O_WRONLY  - write only, O_CREAT - create file if it not exist
        if (file == -1)
        {
            return (1);
        }
        if (write(file, argv[2], ft_strlen(argv[2])) == -1) // will write from command line (argv[2]) into argv[1](file)
        {
            return (1); // first will do write then check return
        }
        if (close(file) == -1)
        {
            return (1); // first will close then will check return
        }
    }
    return (0);
}
