#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if ((i == 1 || i == 5) && (j < 6 && j > 1) || j == 1 || (j == 6 && (i > 1 && i < 5)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 0 || i == 4) || (i + j == 5 - 1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == j) || (i + j == 5 - 1))
            {
                printf("%d", i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    int l;
    printf("\n=====================\n");
    for (int i = -5; i <= 5; i++)
    {
        if (i <= 0)
            l = -i;
        else
            l = i;
        for (int j = 0; j < l + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n=====================\n");
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}