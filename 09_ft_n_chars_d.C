#include <stdio.h>

int ft_n_chars_d(char *str)
{
    int i = 0;
    int char_to_count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'd') // if any element of the string == 'd'
        {
            char_to_count++;
        }
        i++;
    }

    return (char_to_count);
}

/*
int main()
{
    printf("%d\n", ft_n_chars_d("dododo"));
    return (0);
}
*/