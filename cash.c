// this program tells you how many coins and which type is needed to optimize change\

#include <cs50.h>
#include <stdio.h>



int get_cents(void);
int calculate_quarters(int get_cents);

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
    if (result == 0)
    {
        int quarters = cents / 25;
        printf("\nI should give you %i quarters\n\n", quarters);
    }
    else if (result == cents)
    {
        printf("\nNot possible to give you quarters, try with other coins\n\n");
    }
    else if (result != 0 && result != cents)
    {
        printf("\nte doy %i quarters y sobran %i centavos\n\n", cents / 25 , result);
    }
}