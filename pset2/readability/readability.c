#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Prompt user
    string text = get_string("Text: ");

    // String of length
    int i = strlen(text);
    int letters = 0;
    int words = 0;
    int sentences = 0;

    // Loop for counting 
    for (int x = 0; x < i; x++)
    {
        // Counting of letters
        char c = text[x];
        if (isalpha(c) != 0)
        {
            letters++;
        }

        // Counting of words
        if (c == ' ')
        {
            words++;
        }

        // Counting of Sentences
        if (c == '.' || c == '!' || c == '?')
        {
            sentences++;
        }
    }

    words = words + 1 ;

    // Calculation of grade
    float L = ((float)letters / (float)words) * 100;
    float s = ((float)sentences / (float)words) * 100;
    float subindex = 0.0588 * L - 0.296 * s - 15.8;
    int index = round(subindex);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }

}