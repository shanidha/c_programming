#include <stdio.h>

int main()
{
    int n, flag = 0, pos, new;
    printf("enter the limit\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the position for deletion\n");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("Invalid Position\n");
        return 1;
    }

    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;
    printf("Array after deletion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (i == n - 1 || j == 2 * i)
            {

                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
