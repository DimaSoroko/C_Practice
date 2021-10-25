/*

The code below is wrong and will not compile
#include <stdio.h>

void	ft_print_values(int comparison, int my_int, char my_char, char *my_str)
{
	printf("\n----------------------------------\n");
	printf("Comparison:\t[%d]\n", comparison);
	printf("My_int:\t\t[%d]\n", my_int);
	printf("My_char:\t[%c]\n", my_char);
	printf("My_string:\t[%s]\n", my_str);
	printf("----------------------------------\n\n");
}

int	main(void)
{
	// Initialization of variables
	int	comparison_result;
	int	my_int;
	char	my_char;
	char	*my_string;

	// Assignation of variables
	my_int = 0;
	my_char = '0';
	comparison_result = (my_int == 0); 
	my_string = "Hola";

	// Print the values:
	ft_print_values(comparison_result, my_int, my_char, my_string);

	// Second assignation block
	// -------------------------------------------
	my_int = "Bonjour";
	'z' = 'z';
	comparison_result = (my_int == "Bonjour");
	my_string == "Au revoir";
	// -------------------------------------------

	// Print the values:
	ft_print_values(comparison_result, my_int, my_char, my_string);

	// Third assignation block
	// -------------------------------------------
	my_int == 4;
	my_char == 'd';
	comparison_result = (my_char = 'd');
	my_string = my_int;
	// -------------------------------------------
	
	// Print the values:
	ft_print_values(comparison_result, my_int, my_char, my_string);

	return (0);
}
Fix it to produce the following output
----------------------------------
Comparison:     [1]
My_int:         [0]
My_char:        [0]
My_string:      [Hola]
----------------------------------


----------------------------------
Comparison:     [1]
My_int:         [123]
My_char:        [z]
My_string:      [Au revoir]
----------------------------------


----------------------------------
Comparison:     [0]
My_int:         [4]
My_char:        [d]
My_string:      [Ciao]
----------------------------------


You can only modify the second and third assignation blocks in the code (see the comments)
You can only change the present assignation blocks code and you cannot add any lines of code

Allowed functions:	none

*/

#include <stdio.h>

void ft_print_values(int comparison, int my_int, char my_char, char *my_str)
{
	printf("\n----------------------------------\n");
	printf("Comparison:\t[%d]\n", comparison);
	printf("My_int:\t\t[%d]\n", my_int);
	printf("My_char:\t[%c]\n", my_char);
	printf("My_string:\t[%s]\n", my_str);
	printf("----------------------------------\n\n");
}
int main(void)
{
    // Initialization of variables
    int comparison_result;
    int my_int;
    char my_char;
    char *my_string;

    // Assignation of variables
    my_int = 0;
    my_char = '0';
    comparison_result = (my_int == 0);
    my_string = "Hola";

    // Print the values:
    ft_print_values(comparison_result, my_int, my_char, my_string);

    // Second assignation block
    // -------------------------------------------
    my_int = 123;
    my_char = 'z';
    comparison_result = (my_int != (int)("Bonjour"));// (int)(my_char) - cast char into int by ascii
    my_string = "Au revoir";

    /*
    my_int = 123;
	my_char = 'z';
	comparison_result = (my_int != (int)(my_char)); // (int)(my_char) - cast char into int by ascii 123 != 122
	my_string = "Au revoir";
    */
    // -------------------------------------------

    // Print the values:
    ft_print_values(comparison_result, my_int, my_char, my_string);

    // Third assignation block
    // -------------------------------------------
    my_int = 4;
    my_char = 'd';
    comparison_result = (my_char != 'd');
    my_string = "Ciao";
    // -------------------------------------------

    // Print the values:
    ft_print_values(comparison_result, my_int, my_char, my_string);

    return (0);
}
