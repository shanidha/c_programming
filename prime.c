#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("enter the number\n");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime Numberr\n");
    }
    else
    {
        printf("not Prime Numberr\n");
    }

    return 0;
}
