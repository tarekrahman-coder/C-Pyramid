#include <stdio.h>

int main()
{
    int i, j, space, n = 5;

    for (i = 1; i <= n; i++)
    {
        for (space = i; space < n; space++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++)
            printf("%c", 'A' + j - 1);

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (space = n; space > i; space--)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++)
            printf("%c", 'A' + j - 1);

        printf("\n");
    }

    return 0;
}