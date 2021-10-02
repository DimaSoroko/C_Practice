/*Write a function that will take an integer as an argument

The function must compute and print the square of this number, followed by a newline character

The function must be prototyped as follows:

void ft_square(int n);

*/

#include <stdio.h>
void ft_square(int n)
{
    int square_of_its_number;
    square_of_its_number = n * n;
    printf("The square of a number: %d is: %d\n", n, square_of_its_number);
}

/*int main ()
{
    ft_square(4);
    return (0);
}
*/
