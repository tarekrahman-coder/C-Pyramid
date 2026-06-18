#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        int j = 1;
        while (j < i)
        {
            printf(" ");
            j++;
        }

        for (int k = 6; k > i; k--)
        {
            printf("*");
        }

        printf("\n");
    }
}