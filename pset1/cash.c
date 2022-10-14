#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float dollars; //float for get  float value
    do
    {
        dollars = get_float("change owed: "); //for get input
    }while (dollars < 0);
    
    
    int cents = round(dollars * 100);
    int coins = 0;
    
    
    //design for dividing
    int denominations[] = {25,10,5,1};
    int size = sizeof(denominations)/ sizeof(int);
    for(int i = 0; i< size; i++)
    {
        coins += cents / denominations[i];
        cents %= denominations[i];
    }
    
    printf("%i\n", coins); //output
}
