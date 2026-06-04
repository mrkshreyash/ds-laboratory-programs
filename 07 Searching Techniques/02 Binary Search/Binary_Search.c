#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // Better than (low+high)/2 to avoid overflow

        if (arr[mid] == target)
            return mid; // Target found at index mid

        if (arr[mid] < target)
            low = mid + 1; // Look in the right half
        else
            high = mid - 1; // Look in the left half
    }
    return -1; // Not found
}

int main()
{
    int arr[100], n, target, choice;

    // Requirement: Sorted Input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in SORTED order (ascending):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (1)
    {
        printf("\n--- Binary Search Menu ---\n");
        printf("1. Search\n2. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter target to find: ");
            scanf("%d", &target);
            int result = binarySearch(arr, n, target);
            if (result != -1)
                printf("Found at index: %d\n", result);
            else
                printf("Not found.\n");
        }
        else
            break;
    }
    return 0;
}