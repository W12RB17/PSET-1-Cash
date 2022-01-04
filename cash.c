// this program tells you how many coins and which type is needed to optimize change\

#include <cs50.h>
#include <stdio.h>



int get_cents(void);
int calculate_quarters(int get_cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{ 
    int cents = get_cents();
    int quarters = calculate_quarters(cents);
    int dimes = calculate_dimes(cents);
    int nickels = calculate_nickels(cents);
    int pennies = calculate_pennies(cents);
    printf("\nQuarters: %i\nDimes: %i\nNickels: %i\nPennies: %i \n\n", quarters, dimes, nickels, pennies);
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
    int quarters = cents / 25;
    return quarters;
}


int calculate_dimes(int cents)
{
    int dimes = (cents % 25) / 10;
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = ((cents % 25) % 10) / 5;
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = (((cents % 25) % 10) % 5) / 1;
    return pennies;
}