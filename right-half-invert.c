#include <stdio.h>

int main()
{
    int i, j, n = 5;

    // ASTRIC
    for (i = n; i >= 1; i--)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");

    // NUMBERS
    for (i = n; i >= 1; i--)
    {
        // spaces
        for (j = n; j > i; j--)
        {
            printf(" ");
        }

        // numbers
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\n");

    // ALPHABETS
    for (i = n; i >= 1; i--)
    {
        // spaces
        for (j = n; j > i; j--)
        {
            printf(" ");
        }

        // alphabets
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}