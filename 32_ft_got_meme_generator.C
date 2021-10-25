/*


Time to do some serious business now. We will recreate the following Game of Thrones meme behaviour.
image

Write a function called ft_got_meme_generator that will take a string as an argument.
It must be prototyped as follows:  void	ft_got_meme_generator(char *str);

Allowed functions:	none

It will replace every occurence of letters 'e', 'a' and 'o' in that string by the vowel 'i'

For example, the following main function:

#include <stdio.h>

int	main(void)
{
  char	str[30] = "Let me fight for you khaleesi";

  ft_got_meme_generator(str);
  printf("%s\n",str); // Will print "Lit mi fight fir yiu khiliisi";
  return (0);
}
Will produce the following output: Lit mi fight fir yiu khiliisi;

*/

#include <stdio.h>

void ft_got_meme_generator(char *str)
{
    int i;
    i = 0;
  
    while (str[i] != '\0')
    {
        if (str[i] == 'e')
        {
            str[i] = 'i';
        }
        if (str[i] == 'o')
        {
            str[i] = 'i';
        }
        if (str[i] == 'a')
        {
            str[i] = 'i';
        }
      i++;
    }

    
}

int main(void)
{
    char str[30] = "Let me fight for you khaleesi";

    ft_got_meme_generator(str);
    printf("%s\n", str); // Will print "Lit mi fight fir yiu khiliisi";
    return (0);
}
