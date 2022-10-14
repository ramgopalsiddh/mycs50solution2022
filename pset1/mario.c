#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n;

    do
    {
        //user input
        n = get_int("height:");
        
    } 
    while( n<1 || n>8);  //for input accepint only between 1 to 8
    
    for(int i= 0; i<n ; i++)
    {
        for(int j=0;j<n; j++)
        {
            
            if(i + j<n-1) //for blanck space
            
              printf(" ");
              
            else
                printf("#");
        }
          
        printf("\n");    //for next line
    }

}