#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int cents_owed;

    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);

    int quarters = round(cents_owed / 25);
    int dimes = round((cents_owed % 25) / 10);
    int nickels = round(((cents_owed % 25) % 10) / 5);
    int pennies = round(((cents_owed % 25) % 10) % 5);

    printf("%i\n", quarters + dimes + nickels + pennies);
}