/*

Write a program which will output a random integer in a determined range
The range is [1st argument of the program as int; 2nd argument of the program as int]
Tip: you have already coded a useful function to convert a string to an int
If the program doesn't have enough or has too many arguments, you should output "Error"
If the first argument is bigger than (or equal to) the second, you should output "Error"
All output should be followed by a newline character
When the program is launched multiple times in a row with the same arguments, it should not always produce the same result

Examples:
./your_program_name a b c
./your_program_name 14 56
./your_program_name 56 14
./your_program_name -1 1

Can produce the following output (integers printed must be random):
Error
32
Error
0

Allowed functions:	printf, rand, srand, time

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
            res = res * 10 + (str[i] - '0');
            i++;
        }

        return (sign * res);
    }
}

void main(int argc, char **argv)
{
    int min;
    int max;
    int random_n;
    min = ft_real_atoi(argv[1]);
    max = ft_real_atoi(argv[2]);

    if (argc != 3 || min >= max)
    {
        printf("Error\n");
    }

    else
    {
        srand(time(NULL)); // to prevent sequence repetition between runs
        random_n = (rand() % (max - min + 1)) + min;
        printf("Random between %d and %d is %d\n", min, max, random_n);
    }
}
