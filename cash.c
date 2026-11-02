#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;
    do
    {
        change = get_int("Please enter the amount of change in cents: ");
    }
    while (change < 1);
    int i;
    for (i = 0; change > 0; i++)
    {
        if (change >= 25)
        {
            change -= 25;
        }
        else if (change >= 10)
        {
            change -= 10;
        }
        else if (change >= 5)
        {
            change -= 5;
        }
        else
        {
            change -= 1;
        }
    }
    printf("No. of coins: %i\n", i);
}
