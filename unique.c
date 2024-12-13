#include <stdio.h>

int main()
{
    int n;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Create an array
    int arr[n];

    // Get the elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find unique elements and overwrite non-unique elements
    int k = 0; // This will be the index for unique elements
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        { // If the element is unique
            arr[k++] = arr[i];
        }
    }

    // Print the array with only unique elements
    printf("Array with only unique elements: \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
