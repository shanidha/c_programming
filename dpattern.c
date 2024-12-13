#include <stdio.h>
int main()
{
    int n;
    printf("Enter the count\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 1 || ((i == 0 || i == n - 1) && (j > 1 && j < n - 2)) ||
                (j == n - 2 && i != 0 &&
                 i != n - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    int rows = 5;

    for (int i = 0; i < 2 * rows; i++)
    {
        for (int j = 0; j < 2 * rows; j++)
        {
            if (i < rows)
            {
                if (j <= i || j >= 2 * rows - 1 - i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                if (j <= 2 * rows - i - 1 || j >= i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}