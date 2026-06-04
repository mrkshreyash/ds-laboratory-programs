#include <stdio.h>

// Function to perform Linear Search
// Returns the index if found, or -1 if not found
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Found! Return the position
        }
    }
    return -1; // Not found after checking everything
}

int main()
{
    int arr[100], size, choice, target, result;

    printf("Enter number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        printf("\n--- Linear Search Menu ---\n");
        printf("1. Search for a number\n2. Display array\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number to search: ");
            scanf("%d", &target);
            result = linearSearch(arr, size, target);
            if (result != -1)
                printf("Element found at index: %d\n", result);
            else
                printf("Element not found in array.\n");
            break;
        case 2:
            for (int i = 0; i < size; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;
        case 3:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}