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

int ft_withdrawal(int current_balance, int modification)
{
    int result = current_balance - modification; //  SAME : modification < 0 ? return (current_balance) : return (current_balance - modification);
    if (modification < 0)
    {
        return (modification);
    }
    return (result);
}

int ft_deposit(int current_balance, int modification)
{
    int result = current_balance + modification;
    if (modification < 0)
    {
        return (modification);
    }
    return (result);
}

int ft_check_balance(int current_balance)
{
    return (current_balance);
}

int ft_wrong_operation(int modification)
{
    return (modification);
}

int ft_bank(char *operation, int current_balance, int modification)
{
    int withdrawal_result;
    int deposit_result;

    if (strcmp(operation, "withdrawal") == 0) // 1 == 0? = 0(no) / 0 == 0 = 1(yes)?
    {
        withdrawal_result = ft_withdrawal(current_balance, modification);
        return (withdrawal_result);
    }

    else if (strcmp(operation, "deposit") == 0)
    {
        deposit_result = ft_deposit(current_balance, modification);
        return (deposit_result);
    }

    else if (strcmp(operation, "check balance") == 0)
    {
        ft_check_balance(current_balance);
        return (current_balance);
    }

    else
    {
        ft_wrong_operation(modification);
        return (modification);
    }
    return (0);
}

/*
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
*/
