#include <stdio.h>
int main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (i == n - 1 || j == 0 || j == 2 * i)
            {

                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}