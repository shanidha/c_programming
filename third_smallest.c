// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[] = {3, 2, 1, 5, 0, -1, 9, 5}, n = 8, smallest, secondSmallest, thirdSmallest;

    if (a[0] < a[1])
    {
        if (a[0] < a[2])
        {
            smallest = a[0];
            if (a[1] < a[2])
            {

                secondSmallest = a[1];
                thirdSmallest = a[2];
            }
            else
            {
                secondSmallest = a[2];
                thirdSmallest = a[1];
            }
        }
        else
        {
            smallest = a[2];
            secondSmallest = a[0];
            thirdSmallest = a[1];
        }
    }
    else
    {
        if (a[1] < a[2])
        {
            smallest = a[1];
            if (a[0] < a[2])
            {

                secondSmallest = a[0];
                thirdSmallest = a[2];
            }
            else
            {
                secondSmallest = a[2];
                thirdSmallest = a[0];
            }
        }
        else
        {
            smallest = a[2];
            secondSmallest = a[1];
            thirdSmallest = a[0];
        }
    }
    for (int i = 3; i < n; i++)
    {
        if (a[i] < smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < secondSmallest && a[i] != smallest)
        {
            thirdSmallest = secondSmallest;
            secondSmallest = a[i];
        }
        else if (a[i] < thirdSmallest && a[i] != secondSmallest)
        {
            thirdSmallest = a[i];
        }
    }
    printf("smallest : %d \t secondSmallest: %d  thirdSmallest: %d", smallest, secondSmallest, thirdSmallest);
    return 0;
}