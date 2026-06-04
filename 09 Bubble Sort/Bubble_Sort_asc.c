#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    int swapped; // The "Optimized" Flag

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0; // Reset flag for each pass

        // n-i-1 because the last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap logic
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // A swap happened!
            }
        }

        // If no two elements were swapped by inner loop, then break
        if (swapped == 0)
        {
            printf("Array sorted early at pass %d.\n", i + 1);
            break;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted array: \n");
    printArray(data, n);

    bubbleSort(data, n);

    printf("Sorted array: \n");
    printArray(data, n);
    return 0;
}