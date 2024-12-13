// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int a[] = {1, 3, 2, 5, 8, 7, 8, 9, 12, 19}, n = 10, flag = 0, temp;

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            temp = a[i];
            for (int k = i; k > j; k--)
            {
                a[k] = a[k - 1];
            }

            a[j++] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}