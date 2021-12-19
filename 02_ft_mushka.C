/*

Write a function called ft_mushka that will take no arguments

The function must return a string "Mushka is cute" followed by a newline character

The function must be prototyped as follows: char *ft_mushka(void);

Allowed functions:	none

Bonus:

If you're coming from the future, you know that without any allowed functions this exercice doesn't make much sense
Can you correct it by using only one unauthorized function?

*/

#include <stdio.h>
#include <stdlib.h>

char *ft_mushka(void)
{
    char *str = "Mushka is cute";
    char *p = (char *)malloc(15 * sizeof(char)); // ask  to give memory in the heap for 14 chars // same as : malloc(14*sizeof(char))
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        p[i] = str[i]; // will save all the elements (except '\0') of string array into 'p'(heap)
        i++;
    }
    p[i] = '\0'; // all string has been read so the last element is '\0'

    return (p);
}


/*

int main()
{
    char *heap_return;
    heap_return = ft_mushka();
    printf("%s\n", heap_return);
    return (0);
}

*/

