#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    int k = atoi(argv[1]);
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            return 1;
        }
    }
    if (k < 0)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    else
    {
        string s = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if islower(s[i])
            {
                printf("%c", (((s[i] + k) - 'a') % 26) + 'a');
            }
            else if isupper(s[i])
            {
                printf("%c", (((s[i] + k) - 'A') % 26) + 'A');
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
        return 0;
    }
}
