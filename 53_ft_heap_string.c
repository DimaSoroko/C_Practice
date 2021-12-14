/*

Consider the following program:

#include <stdio.h>

char	*ft_stack_string(void)
{
	char	str[14] = "Just a string";
	return (str);
}

int main(void)
{
	char	*stack_string;

	stack_string = ft_stack_string();
	printf("%s\n", stack_string);
	return (0);
}

Exceptionally, you can compile this code without -Wall -Wextra -Werror flags, simply by using
gcc c_file.c
Can you see the problem in this program and its output?
You can try to compile it with -Wall -Wextra -Werror flags to have a tip about the problem
For this exercice, you will need to write a function ft_heap_string that will allow you to compile the following program:

#include <stdio.h>

int main(void)
{
	char	*heap_string;

	heap_string = ft_heap_string();
	printf("%s\n", heap_string);
	return (0);
}

The function must return a string containing "Just a string"
The provided program, when compiled with your "ft_heap_function" must print "Just a string" followed by a newline on standard output
You cannot modify the main function!
You must submit your function along with the provided main function
Your code must be compilable with
gcc -Wall -Wextra -Werror ft_heap_string.c

Allowed functions:	malloc

Bonus:

Remember this exercice you did? (02_ft_mushka.c)
There is something wrong with it too, isn't there?
Can you fix it?

*/

#include <stdio.h>
#include <stdlib.h>

char *ft_heap_string(void)
{
    char str[14] = "Just a string";
    char *p = (char *)malloc(sizeof(char)); // ask  to give memory in the heap  // same as : malloc(14*sizeof(char))
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        p[i] = str[i]; // will save alla the element of string array into 'p'(heap)
        str[i] = '\0'; // str[14] == '\0'
        i++;
    }

    return (p);
}

int main(void)
{
    char *heap_string;
    heap_string = ft_heap_string();
    printf("%s\n", heap_string);
    return (0);
}
