#include <stdio.h>
int main()
{
    int a[] = {8, 6, 7, 9, 45, 34, 21}, n = 7, newValue, pos, insert, k, temp;
    printf("enter the position to insert in array 0 to %d", n - 1);
    scanf("%d", &pos);
    printf("enter the newValue");
    scanf("%d", &newValue);
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = newValue;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
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
    printf("\nenter the newValue");
    scanf("%d", &k);
    for (int i = 0; i > n; i++)
    {
        if (a[i] > k)
        {
            insert = i;
            printf("%d %d \t\n", a[i], insert);
            break;
        }
    }

    for (int i = n; i > insert; i--)
    {
        a[i] = a[i - 1];
    }
    a[insert] = k;
    n++;
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}