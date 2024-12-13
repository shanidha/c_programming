#include <stdio.h>
int main()
{
    int n;
    printf("enter the limit\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2 * i + 2; j++)
        {
            printf("*\n");
        }
        for (int k = 0; k < 3 + 2 * i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}