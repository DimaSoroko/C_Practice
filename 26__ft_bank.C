
/*
Write the function ft_bank that will be prototyped as follows:

int ft_bank(char *operation, int current_balance, int modification)

Depending on its arguments the function must execute different operations:

If the operation is "withdrawal", you need to substract modification from current_balance and return the result

The bank cannot accept a negative withdrawal. If modification is negative, return modification

If the operation is "deposit", you need to add modification to current_balance and return the result.

The bank cannot accept a negative deposit. If modification is negative, return modification

If the operation is "check balance", you can ignore modification and simply return current_balance

If the operation is anything else, simply return modification argument

For each of these 4 cases, write a separate (sub)function which you will be calling from "ft_bank" function

Examples:

ft_bank("withdrawal", 1500, 200); //returns 1300
ft_bank("withdrawal", 1500, -200); //returns -200
ft_bank("deposit", 100, 400); //returns 500
ft_bank("deposit", 100, -400); //returns -400
ft_bank("check balance", -315, 45); //returns -315
ft_bank("CHECK BALANCE", -315, 45); //returns 45
ft_bank("buy a monocycle", 360, 46); //returns 46
ft_bank("feed a stray possum", 999, -32); //returns -32

*/


#include <stdio.h>
#include <string.h>

int ft_withdrawal(char *str, char *str2)
{
    int result;
    result = strcmp(str, str2);
    return (result);
}

int ft_deposit(char *str, char *str2)
{
    int result;
    result = strcmp(str, str2);
    return (result);
}

int ft_check_balance(char *str, char *str2)
{
    int result;
    result = strcmp(str, str2);
    return (result);
}

int ft_bank(char *operation, int current_balance, int modification)
{
    char *str_1 = "withdrawal";
    char *str_2 = "deposit";
    char *str_3 = "check balance";
    if (!ft_withdrawal(str_1, operation))
    {
        if (modification > 0)
        {
            return (current_balance - modification);
        }

        else if (modification < 0)
        {
            return (modification);
        }
    }

    else if (!ft_deposit(str_2, operation))
    {
        if (modification > 0)
        {
            return (current_balance + modification);
        }

        else if (modification < 0)
        {
            return (modification);
        }
    }

    else if (!ft_check_balance(str_3, operation))
    {
        return (current_balance);
    }

    else
    {
        return (modification);
    }

    return (0);
}


int main()
{

    printf("%d\n", ft_bank("withdrawal", 1500, 200));
    printf("%d\n", ft_bank("withdrawal", 1500, -200));
    printf("%d\n", ft_bank("deposit", 100, 400));
    printf("%d\n", ft_bank("deposit", 100, -400));
    printf("%d\n", ft_bank("check balance", -315, 45));
    printf("%d\n", ft_bank("CHECK BALANCE", -315, 45));
    printf("%d\n", ft_bank("buy a monocycle", 360, 46));
    printf("%d\n", ft_bank("feed a stray possum", 999, -32));

    return (0);
}
