#include <stdio.h>
#include <cs50.h>

// prototype
int get_negative_int(void);

int main(void)
{
    //get negative integer from user
    int i = get_negative_int();
    printf("%i\n",i);
}

int get_negative_int(void)
{
    int n;
    do
    {

        n = get_int("Negative integer: ");
    }
    while (n > 0);
    return n;
}