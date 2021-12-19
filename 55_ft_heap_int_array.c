/*

Write a function called ft_heap_int_array that will take 2 integers as arguments

The function must be prototyped as follows:  int *ft_heap_int_array(int size, int filler);

The function must return an array of integers of size elements
Each element's value of the returned array must be set to filler

Example:
ft_heap_int_array(4, 14); // will create and return the following array: [14 14 14 14]
ft_heap_int_array(1, 32); // will create and return the following array: [32]
ft_heap_int_array(2, 0); // will create and return the following array: [0 0]

If a "malloc" call fails, return a NULL pointer
Compile with "gcc -Wall -Wextra -Werror"

Allowed functions:	malloc

*/

#include <stdlib.h>
#include <stdio.h>

int *ft_heap_int_array(int size, int filler)
{
    int *array;
    array = (int *)malloc(size * sizeof(int)); // reserve "size" in heap
    if (array == NULL)
    {
        return (0);
    }
    int i;
    i = 0;
    while (i < size)
    {
        array[i] = filler; // first element of array is equal to filler end etc till i = size
        i++;
    }
    return (array);
}

/*

int main()
{
    int i;
    int size_main;
    int heap_int_ret;
    size_main = 8;
    heap_int_ret = *ft_heap_int_array(size_main, 8);
    i = 0;

    while (i < size_main) // loop to printf all the array
    {
        printf("[%d]", heap_int_ret);
        i++;
    }
    printf("\n");
    return (0);
}

*/
