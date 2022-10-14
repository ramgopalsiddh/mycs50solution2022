#include<cs50.h>
#include<stdio.h>

int main (void)
{
    float x = get_float("X:");
    float y = get_float("Y:");

    //.20 use for calculating 20 number after dot(.)
    printf("%.20f\n", x / y);
}