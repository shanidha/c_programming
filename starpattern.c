#include <stdio.h>
int main()
{
    int n, k, i, j, l;
    printf("enter the limit\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (k = 0; k < 2 * n - (2 * i - 1); k++)
        {
            printf("* ");
        }

        // if(j<2*n-i-1)
        //   printf("* ");
        //   else
        //   printf("  ");

        printf("\n");
    }
    printf("\n\n----------------------------\n\n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < 2 * n - i - 1; j++)
        {
            //     printf("  ");
            //   }
            // for(k=0;k<2*n-(2*i-1);k++){
            //   printf("* ");
            // }

            if (j < i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("\n\n----------------------------\n\n");

    for (int i = -n; i <= n; i++)
    {
        if (i < 0)
            l = -i;
        else
            l = i;
        for (k = 0; k < n - l; k++)
        {
            printf("  ");
        }
        for (j = 0; j < 2 * l + 1; j++)
        {

            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n----------------------------\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == j)
            {
                if (i <= n / 2)
                    printf("%d ", i + 1);
                else
                    printf("%d ", n - i);
            }
            else if (n == i + j + 1)
            {
                if (i <= n / 2)
                    printf("%d ", i + 1);
                else
                    printf("%d ", n - i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == j)
            {

                printf("%d ", i + 1);
            }
            else if (n == i + j + 1)
            {

                printf("%d ", j + 1);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == n + 1 - i)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
}