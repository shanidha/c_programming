// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int a[] = {1, 3, 0, 5, 0, 7, 8, 9, 12, 19}, n = 10, flag = 0;
    int j = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            a[j--] = a[i];
        }
    }
    while (j >= 0)
    {
        a[j--] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}