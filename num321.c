// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int count = 1, m = 1, n;
    printf("enter the limit");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++, count++)
            {
                printf("%d ", count);
            }
        }
        else
        {
            int m = count + i - 1;
            for (int j = 1; j <= i; j++, count++)
            {
                printf("%d ", m--);
            }
        }
        printf("\n");
    }

    return 0;
}