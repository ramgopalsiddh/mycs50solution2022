#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string names[] = {"Bill","Charli","Fred","George","Ginny","Percy","Ron"};

    for (int i =0; i<7; i++);
    {
        if (strcmp (names[i],"Ron"))
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}