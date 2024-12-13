#include <stdio.h>
int main()
{
    int n, count, m;
    char a[] = "MALAYALAM";
    printf("enter the limit\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        count = 65;
        m = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                printf("%d ", m++);
            else
                printf("%c ", count++);
        }
        printf("\n");
    }
    printf("\n===============\n");
    for (int i = 0; i < 9; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            printf("%c ", a[j]);
        }
        printf("\n");
    }
    printf("\n===============\n");
    int s = 1;
    int letter = 1;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {

                printf("%d ", s);
            }
            s++;
        }
        else
        {

            for (int j = 1; j <= i; j++)
            {
                printf("%c ", 64 + letter);
            }
            letter++;
        }

        printf("\n");
    }
    printf("\n===============\n");
    for (int i = n; i >= 1; i--)
    {

        for (int j = i; j <= n; j++)
        {

            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n===============\n");
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 5; j >= 6 - i; j--)
        {

            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n===============\n");
    int l;
    for (int i = -n; i <= n; i++)
    {

        if (i < 0)
        {
            l = -i;
        }
        else
        {
            l = i;
        }
        for (int j = 0; j <= n - l - 1; j++)
        {

            printf("%d ", j + 1);
        }

        printf("\n");
    }
    printf("\n");
}
