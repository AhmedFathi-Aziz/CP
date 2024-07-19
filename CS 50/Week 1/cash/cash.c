#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    int change = 0;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change <= 0);

    int answer = 0;
    int div = 0;

    div = change / quarters;
    answer = div;
    change %= quarters;

    div = change / dimes;
    answer += div;
    change %= dimes;

    div = change / nickels;
    answer += div;
    change %= nickels;

    div = change / pennies;
    answer += div;

    printf("%i\n", answer);

    return 0;
}
