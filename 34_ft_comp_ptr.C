/*

Write the function ft_comp_ptr that will 2 integer pointers as arguments, "a" and "b"

The function must compare the values stored at pointed addresses

It has to store the smallest value of two at the address pointed to by "a"

It has to store the biggest value of two at the address pointed to by "b"

The function must be prototyped as follows:  void ft_comp_ptr(int *a, int *b);

Allowed functions:	none

Examples:

int a;
int b;

a = 45;
b = 12;
ft_comp_ptr(&a, &b);
printf("%d %d\n", a, b); // will print "12 45"

*/

#include <stdio.h>

void ft_comp_ptr(int *a, int *b)
{
    int c;
    c = *a;
    if (*a > *b)
    {
        *a = *b;
        *b = c;
    }
}


/*
int main()
{
    int a;
    int b;

    a = 45;
    b = 12;
    ft_comp_ptr(&a, &b);
    printf("%d %d\n", a, b); // will print "12 45"
    return (0);
}
*/
