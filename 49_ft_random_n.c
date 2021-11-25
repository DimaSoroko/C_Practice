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
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int min;
    int max;
    int random_n;
    min = atoi(argv[1]);
    max = atoi(argv[2]);

    if (argc > 3 || argc < 3)
    {
        printf("Error");
    }
    else if (min >= max)
    {
        printf("Error");
    }
    else
    {
        srand(time(NULL)); // to prevent sequence repetition between runs
        random_n = (rand() % (max - min + 1)) + min;
        printf("Random between %d and %d is %d\n", min, max, random_n);
    }

    return (0);
}