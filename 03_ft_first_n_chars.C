#include <unistd.h>

void ft_first_n_chars(char *str, int n)
{
   write(1, str, n);
   write(1, "\n", 1);
}

/*
 int main ()
 {
     ft_first_n_chars("Hello", 1);
     ft_first_n_chars("Hello", 5);
     return (0);
 }
 */
 