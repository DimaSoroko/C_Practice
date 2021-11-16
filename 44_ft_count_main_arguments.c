/*

Write a program which when executed will display the number of its arguments, followed by a newline character

Examples:

./your_program_name sponge bob square pants
./your_program_name
./your_program_name Mushka
./your_program_name Babouche eats a lot of paté
./your_program_name "Babouche eats a lot of paté"
Will produce the following output:

4
0
1
6
1

Allowed functions:	printf

*/

#include <stdio.h>


int main(int argc, char *argv[]) 
// The first argument of main is argc which is the number of arguments passed to your program. 
// This is at least 1, which is the name of the executable.
{
	printf("%d\n", argc - 1);
	return 0;
}