// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i * 3; j++)
        {
            printf("*");
        }
        printf("\n");
        for (int k = 1; k <= 2; k++)
        {
            printf("*\n");
        }
    }
    printf("\n=================\n");
    for (int i = 3; i > 0; i--)
    {
        for (int j = 1; j <= i * 2; j++)
        {
            printf("X");
        }
        printf("\n");

        printf("X\n");
    }
    printf("\n=================\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i * 2; j++)
        {
            printf("* ");
        }
        printf("\n");
        for (int k = 1; k <= i; k++)
        {
            printf("* \n");
        }
    }

    int flag = 0;
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 15, 16}, n = 10;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        if (arr[i] < 2)
        {
            flag = 1;
        }
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if (i == n - 1)
            {
                n = n;
            }
            else if (i == n - 2)
            {
                n = n - 1;
            }
            //   else if(i==n-3){
            //       n=n-2;
            //   }
            else
            {
                for (int k = i; k < n - 3; k++)
                {
                    arr[k + 1] = arr[k + 3];
                }
                n = n - 2;
            }
        }
        //   if(arr[i]%2==0){
        //       arr[i]=0;
        //   }
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}