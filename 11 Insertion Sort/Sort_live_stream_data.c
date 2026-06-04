#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    // We start from the second element (index 1)
    for (i = 1; i < n; i++)
    {
        key = arr[i]; // The element we want to insert
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shifting to the right
            j = j - 1;
        }
        // Place the key in its correct spot
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int data[] = {12, 11, 13, 5, 6};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted array: ");
    printArray(data, n);

    insertionSort(data, n);

    printf("Sorted array:   ");
    printArray(data, n);

    return 0;
}