/*

The code below is incomplete and will not compile
You must write one and only one line of code in each function to produce the following output:
-911, what's your emergency?
-This is the captain of the precinct, couldn't 911 help you?
-This is out of the commisionner's jurisdiction, I'll transfer you.
-FBI doesn't have the necessary ressources, listen just talk to the CIA, okay?
-Wow this seems too important for the CIA to handle. I'll give you homeland security.
-I'll call the president right now. Please stay on the line.
-Seriously? Okay Timmy I'll send you the wifi password... Again...
The secret code is: 2147483647

*/

#include <stdio.h>

int ft_president(void)
{
    int secret_code;

    secret_code = 2147483647;
    printf("-Seriously? Okay Timmy I'll send you the wifi password... Again...\n");
    return (secret_code);
}

int ft_homeland_security(void)
{
    printf("-I'll call the president right now. Please stay on the line.\n");
    return (ft_president());
}

int ft_cia(void)
{
    printf("-Wow this seems too important for the CIA to handle. I'll give you homeland security.\n");
    return (ft_homeland_security());
}

int ft_fbi(void)
{
    printf("-FBI doesn't have the necessary ressources, listen just talk to the CIA, okay?\n");
    return (ft_cia());
}

int ft_commisionner(void)
{
    printf("-This is out of the commisionner's jurisdiction, I'll transfer you.\n");
    return (ft_fbi());
}

int ft_captain(void)
{
    printf("-This is the captain of the precinct, couldn't 911 help you?\n");
    return (ft_commisionner());
}

int ft_police(void)
{
    printf("-911, what's your emergency?\n");
    return (ft_captain());
}

int main(void)
{
    int secret_code = ft_police();
    printf("The secret code is: %d\n", secret_code);
    return (0);
}
