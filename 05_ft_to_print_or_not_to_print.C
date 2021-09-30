#include<stdio.h>

void  ft_to_print_or_not_to_print(char *str, int to_print)
{
  if (to_print == 0)
    printf("I refuse to print your string!\n");
  else
    printf("%s\n", str);
}

int main(void)
{
  ft_to_print_or_not_to_print("To print or not to print!\n", !0);
  ft_to_print_or_not_to_print("", 0);
  return (0);
}