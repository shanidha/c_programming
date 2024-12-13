#include <stdio.h>
int main()
{
    int a[] = {8, 6, 7, 9, 45, 34, 21}, n = 7, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}