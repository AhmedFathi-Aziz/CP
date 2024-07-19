#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = 0;
    do
    {
        number = get_long("Number: ");
    }
    while (number <= 0);

    int digits = 0;
    long last_two = 0;
    int sum = 0;
    int other_sum = 0;
    bool flag = false;
    
    while (number)
    {
        int digit = number % 10;
        if (number > 9)
            last_two = number;
        number /= 10;
        if (flag)
        {
            int multiply = digit * 2;
            if (multiply > 9)
            {
                sum += multiply % 10;
                multiply /= 10;
                sum += multiply;
            }
            else
            {
                sum += multiply;
            }
        }
        else
        {
            other_sum += digit;
        }
        flag = !flag;
        digits++;
    }
    printf("%d\n", last_two);
    int card = sum + other_sum;
    if (card % 10 == 0)
    {
        if ((last_two == 34 || last_two == 37) && digits == 15)
        {
            printf("AMEX\n");
        }
        else if ((last_two == 51 || last_two == 52 || last_two == 53 || last_two == 54 ||
                  last_two == 55) &&
                 digits == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (last_two / 10 == 4 && (digits == 13 || digits == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
