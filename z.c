#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || i + j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == 0 || i == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}