// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[] = {1, 1, 2, 7, 0, -21, 12, 13, 15, 16};
    int flag = 0, j, sum = 0, count = 0;
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
        if (flag != 0)
        {
            count++;
            sum = sum + a[i];
            printf(" non prime number in array :%d\n", a[i]); // To check which is th prime number taken-this code line can remove if you want ,
        }
    }
    printf("sum of Non Prime number :%d\n", sum);
    printf("Number of Non Prime Numbers%d\n", count);
    avg = sum / count;
    printf("avg of Non prime number :%2f\n", avg);

    return 0;
}