/*

Write a function called ft_binary_to_char that will take a string as its argument

The function must be prototyped as follows:  char ft_binary_to_char(char *binary);

Its argument will be a string which will be a binary representation of a character
The function must return the character represented by this string
If the argument has characters not present in binary base or the argument has the wrong length for a character representation, return '\0'

Example:
ft_binary_to_char("01000100"); //will return 'D' 
ft_binary_to_char("00110010"); //will return '2'
ft_binary_to_char("0123456789"); //will return '\0'

Compile with "gcc -Wall -Wextra -Werror"

Tips:
You can use this website for easy binary to decimal conversion
The command in the terminal : man ascii
will show you the ascii values for the characters

Allowed functions:	none

*/

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char ft_binary_to_char(char *binary)
{
    int i;
    i = 0;
    int char_to_return;
    char_to_return = 0;
    int caret; // (caret is ^)
    caret = 1; // need to be 1 at the begining (first = 1, then 2, then 4, then 8, etc till 128)

    if (ft_strlen(binary) != 8) // binary can only be 8 numbers
    {
        return ('\0');
    }
    while (binary[i] != '\0')
    {
        i++;
    }
    if (binary[i] == '\0')
    {
        i--;
    }
    while (i >= 0) // loop to read all the binary string backwards
    {
        if (binary[i] != '0' && binary[i] != '1')
        {
            return ('\0');
        }
        char_to_return += caret * (binary[i] - '0');
        // printf("%d\n", char_to_return);
        caret += caret; // or : caret = caret * 2
                        // ex: if binary is "01000100"
                        // char_to_return  = 1(caret of position) * 0(value) - 0(48 in ascii) = 0
                        // +
                        //char_to_return  = 2 * 0 - 0 = 0
                        // +
                        //char_to_return  = 4 * 1 - 0 = 4
                        // +
                        //char_to_return  = 8 * 0 - 0 = 0
                        // +
                        //char_to_return  = 16 * 0 - 0 = 0
                        // +
                        //char_to_return  = 32 * 0 - 0 = 0
                        // +
                        //char_to_return  = 64 * 1 - 0 = 64
                        // +
                        //char_to_return  = 128 * 0 - 0 = 0
                        //char_to_return  = 68
                        // 68 in ASCII is char D, soo will return 'D'

        i--;
    }
    char char_value;
    char_value = (char)char_to_return; // cast int into char
    return (char_value);
}

/*
int main()
{
    printf("%c\n", ft_binary_to_char("01000100"));
    printf("%c\n", ft_binary_to_char("00110010"));
    printf("%c\n", ft_binary_to_char("0123456789"));
    printf("%c\n", ft_binary_to_char("azertyui"));
    printf("%c\n", ft_binary_to_char("010001"));
    printf("%c\n", ft_binary_to_char("abcdefg0"));
    printf("%c\n", ft_binary_to_char("0bcdefg1"));
    printf("%c\n", ft_binary_to_char("01000101"));
    printf("%c\n", ft_binary_to_char("10000000"));
    return (0);
}
*/
