#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    for (int i = 1; i <= height; i++)
    {
        for (int j = height - i; j >= 1; j--)
            printf(" ");
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
