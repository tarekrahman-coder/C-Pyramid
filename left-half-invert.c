#include <stdio.h>

int main()
{
    int i, j, n = 5;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Numbers
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // Alphabets
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}
