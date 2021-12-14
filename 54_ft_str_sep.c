/*

Consider the following program:
#include <stdio.h>

int main(void)
{
	char	str[18] = "Can you split me?";

 	// Line 1 to add
  	// Line 2 to add
  	// Line 3 to add
  	printf("%s\n", str);
  	printf("%s\n", &(str[4]));
 	printf("%s\n", &(str[8]));
  	printf("%s\n", &(str[14]));
	return (0);
}
Replace the three commented out lines with your code to obtain the following output when running the program:
> ./a.out | cat -e
Can$
you$
split$
me?$

Allowed functions:	none

*/

#include <stdio.h>

int main(void)
{
    char str[18] = "Can you split me?";
    str[3] = '\0';
    str[7] = '\0';
    str[13] = '\0';
    printf("%s\n", str);
    printf("%s\n", &(str[4]));
    printf("%s\n", &(str[8]));
    printf("%s\n", &(str[14]));
    return (0);
}