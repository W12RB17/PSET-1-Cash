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
    int result = cents - 25;
 
    printf("\nel resultado es %i\n\n", result);

    
}