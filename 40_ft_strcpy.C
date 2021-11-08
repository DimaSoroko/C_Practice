/*

Write the function ft_strcpy that will reproduce the exact behaviour of the function strcpy
The function must be prototyped as follows: char *ft_strcpy(char *dest, char *src)
Allowed functions:	none

*/

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0') // reads whole src string
    {
        dest[i] = src[i]; 
        i++;
    }
    dest[i] = src[i]; // put src value into dest
    return(dest);
}


/*

int main()
{
    char  src [] = "Test";
    char  dest [] = "";
    printf("The value of dest is : %s\n",dest);
    ft_strcpy(dest, src);
    printf("The value of dest after strcpy is : %s\n",dest);
    return(0);
}

*/
