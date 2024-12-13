#include <stdio.h>

int main()
{
    int n, flag = 0, max, min;
    printf("enter the limit\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else
        {
            min = a[i];
        }
    }
    printf("Largest element in the array %d\n", max);
    printf("Smallest element in the array %d\n", min);
    return 0;
}
