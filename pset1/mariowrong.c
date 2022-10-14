#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int i , j , k , n ;

    n = get_int("height: ");

    if(n<1)
{
    printf("don't exist");
}
else
    {
     for(i = 1; i<=n; i++)
       {
        for( j = n; j>= i ; j--)
        {
            printf(" ");
        }
        for(k= 1; k<=i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
}