#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "mool nath";
    people[0].number = " +91 9950141573";

    people[1].name = "ram gopal";
    people[1].number = " +91 8209820704";

    for (int i=0; i<2; i++)
    {
        if(strcmp(people[i].name, "mool nath") ==0 )
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("not Found \n");
    return 1;
}