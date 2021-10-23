/*

The code below is incomplete and will not compile
#include <stdio.h>

int	main(void)
{
	int	unitialized_integer;

	ft_ptr(&unitialized_integer);
	printf("Result: %d\n", unitialized_integer); // must print "Result: 8888"
	return (0);
}
Add the function ft_ptr that will allow you to compile this code and get the following output:
Result: 8888
The function ft_ptr must be prototyped as follows:  void  ft_ptr(int *arg);

The main function cannot be altered!

Allowed functions:	none

*/

#include <stdio.h>

void ft_ptr(int *arg)
{
    *arg = 8888;
}

int main(void)
{
    int unitialized_integer;
    ft_ptr(&unitialized_integer);
    printf("Result: %d\n", unitialized_integer); 
    return (0);
}