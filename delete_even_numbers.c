// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int count = 0, n, m = 50;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("enter numbers of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            a[count++] = a[i];
        }
    }
    printf("Deleting even numbers  array\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", m);
            m -= 5;
        }
        printf("\n");
    }
    return 0;
}