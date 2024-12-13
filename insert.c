#include <stdio.h>

int main()
{
    int n, flag = 0, pos, new;
    printf("enter the limit\n");
    scanf("%d", &n);
    int a[n + 1];
    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the new element for insertion\n");
    scanf("%d", &new);
    printf("enter the position for insertion\n");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("Invalid Position\n");
        return 1;
    }

    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = new;
    n++;
    printf("Array after insertion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}
