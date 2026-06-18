#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf(" ");
        }

        for (int k = 6 - i; k > 0; k--)
        {
            printf("*");
        }

        printf("\n");
    }
}