#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("text: ");
    int letters = 0, words = 0, sentences = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            letters++;
        }
        else if (isspace(s[i]))
        {
            words++;
        }
        else if (s[i] == '!' || s[i] == '?' || s[i] == '.')
        {
            sentences++;
        }
    }

    words++;

    float L = ((float)letters / (float)words) * 100;
    float S = ((float)sentences / (float)words) * 100;
    float grade = 0.0588 * L - 0.296 * S - 15.8;

    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}
