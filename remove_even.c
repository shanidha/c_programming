#include <stdio.h>

int main()
{
    int arr[] = {2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize = 0;

    // Shift odd numbers to the front of the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[newSize++] = arr[i];
        }
    }

    // Print the modified array
    printf("Array after removing even numbers: \n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}