
#include <stdio.h>

/// This function will print all the numbers from 0 until its argument d (0 and d included)
/// Each printing is followed by a newline //0 0   0 1   1 2
void ft_all_numbers_until_d(int d)
{
  int i;
  i = 0;
  while (i <= d) 
  {
    printf("%d\n", i);
    i++;
  }
}

int main(void)
{
  //ft_all_numbers_until_d(0); // i = 0 
  //ft_all_numbers_until_d(1); // i = 0, i = 0 + 1
  ft_all_numbers_until_d(2); // i = 0, i = 0 + 1, i = 0 + 1 + 1;
  return (0);
}