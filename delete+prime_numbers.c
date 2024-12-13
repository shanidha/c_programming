// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int a[] = {1, 3, 4, 5, 6, 7, 8, 9, 12, 19}, n = 10, flag = 0;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        if (a[i] <= 1)
        {
            flag = 1;
            continue;
        }
        for (int j = 2; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            for (int k = i; k < n - 1; k++)
            {
                a[k] = a[k + 1];
            }
            i--;
            n--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}