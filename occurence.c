#include <stdio.h>

int main()
{
    int i, j, a[100] = {6, 8, 3, 20, 30, 15, 7, 4, 7, 4}, n = 10, k, flag;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 2; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if (i == n - 1)
            {
                n = n;
            }
            else if (i == n - 2)
            {
                n = n - 1;
            }
            else
            {
                for (k = i; k < n - 3; k++)
                {
                    a[k + 1] = a[k + 3];
                    a[k + 2] = a[k + 4];
                }
                n = n - 2;
            }
        }
        if (a[i] % 2 == 0)
        {
            a[i] = 0;
        }
    }
    printf("New array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}