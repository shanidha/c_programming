#include <stdio.h>

int main()
{
    int i, j, count = 0, a[100], n, sum = 0;
    float avg;
    printf("hai shanidha");
    printf("enter the limit of array");
    scanf("%d", &n);
    printf("enter the numbers of the array\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            sum += a[i];
            count++;
        }
    }
    if (count != 0)
    {
        float avg = (float)sum / count;
        printf("Average of odd numbers: %.2f\n", avg);
    }
    else
    {
        printf("No odd numbers in the array.\n");
    }
    avg = sum / count;
    printf("the sum %d of odd numbers is %f", sum, avg);
    return 0;
}