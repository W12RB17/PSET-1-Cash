// this program tells you how many coins and which type is needed to optimize change\

#include <cs50.h>
#include <stdio.h>



int get_cents(void);
int calculate_quarters(int get_cents);
int calculate_dimes(int cents);

int main(void)
{ 
 calculate_quarters(get_cents());
}




int get_cents(void)
{   
    int cents_owed;

    do
    {
        cents_owed = get_int("\nHow many cents I owed you? ");
    } while (cents_owed < 0);

    return cents_owed;   
}

int calculate_quarters(int cents)
{
    int result = cents % 25;
    int quarters = cents / 25;

    if (result == 0 || result == cents)
    {
        printf("Quarters: %i\n\n", quarters);
    }
    else if (result != 0 && result != cents)
    {
        printf("\nte doy %i quarters y sobran %i centavos\n\n", quarters, result);
    }
}


int calculate_dimes(int cents)
{
    int result = cents % 25;
    int dimes = cents / 25;

    if (result == 0 || result == cents)
    {
        printf("Quarters: %i\n\n", dimes);
    }
    else if (result != 0 && result != cents)
    {
        printf("\nte doy %i quarters y sobran %i centavos\n\n", dimes, result);
    }
}