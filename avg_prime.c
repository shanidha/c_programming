// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[] = {1, 1, 2, 7, 0, -21, 12, 13, 15, 16};
    int flag = 0, k = 0, j, sum = 0, count = 0;
    float avg;
    int size = sizeof(a) / sizeof(a[0]);
    printf("size :%d\n", size);
    for (int i = 0; i < size; i++)
    {

        flag = 0;
        if (a[i] <= 1)
        {
            flag = 1;
        }
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
            count++;
            sum = sum + a[i];
            printf("number :%d\n", a[i]);
        }
    }
    printf("sum :%d\n", sum);
    printf("count :%d\n", count);
    avg = sum / flag;
    printf("avg :%f\n", avg);

    printf("\n K array\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    for (int i = 0; i < size; i++)
    {

        flag = 0;
        if (a[i] <= 1)
        {
            flag = 1;
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

            if (i == size - 1)
            {
                size = size;
            }
            else if (i == size - 2)
            {
                size = size - 1;
            }
            else
            {
                for (k = i; k < size - 3; k++)
                {
                    a[k + 1] = a[k + 3];
                    a[k + 2] = a[k + 4];
                }
                size = size - 2;
            }
        }

        if (a[i] % 2 == 0)
        {
            a[i] = 0;
        }
    }
    printf("New array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}