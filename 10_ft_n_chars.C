// Write the function ft_n_chars that will take a string str and a character my_char as arguments
// The function will return the number of argument characters my_char present in the string
// The function must be prototyped as follows: int ft_n_chars(char *str, char my_char)
// Examples:
// ft_n_chars("dodo", 'd') will return 2
// ft_n_chars_d("Dima", 'i') will return 1

#include <stdio.h>

int ft_n_chars(char *str, char my_char)
{
    int i = 0;
    int char_to_count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == my_char)
        {
            char_to_count++;
        }
        i++;
    }
    return(char_to_count);
}
/*
int main()
{
    printf("%d\n", ft_n_chars("lolololo", 'o'));
    return (0);
}
*/