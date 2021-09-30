#include <stdio.h>

void  ft_biggest_number(int a, int b)
{
  if (a > b)
    printf("First argument is bigger\n");
  if (a < b)
    printf("Second argument is bigger\n");
  if (a == b)
    printf("The arguments are equal\n");
}

int main(void)
{
  ft_biggest_number(17, 5);
  ft_biggest_number(-34, 13);
  ft_biggest_number(0, 0);
  return (0);
}