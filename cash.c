// this program tells you how many coins and which type is needed to optimize change\

#include <cs50.h>
#include <stdio.h>



void get_cents(void);

int main(void)
{
 get_cents();   
}

void get_cents(void)
{   
    int cents_owed;
    do
    {
        cents_owed = get_int("\nHow many cents I owed you? ");
    } while (cents_owed < 0);
    
}