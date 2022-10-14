#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
/*{
    int i = get_int("i: ");
   int j = get_int("j: ");

    if(i == j)
    {
        printf("same\n");
    }
    else
    {
        printf("differnt\n");
    }
}*/

{
   char *s = get_string("s: ");
   char *t = get_string("t: ");

   if(strcmp(s, t) == 0)
   {
       printf("same\n");
   }
   else
   {
       printf("differnt\n");
   }
}



