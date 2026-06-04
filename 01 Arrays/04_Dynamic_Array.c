#include <stdio.h>
#include <stdlib.h> // Essential for memory functions

int main()
{
    int *dynamicArray;
    int initialSize, newSize;

    printf("How many numbers do you want to store initially? ");
    scanf("%d", &initialSize);

    // 1. ALLOCATE: Creating memory for the array
    // malloc(number_of_items * size_of_each_item)
    dynamicArray = (int *)malloc(initialSize * sizeof(int));

    // Check if memory was successfully granted
    if (dynamicArray == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    // Input data
    for (int i = 0; i < initialSize; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &dynamicArray[i]);
    }

    // 2. RESIZE: Suppose we need more space later
    printf("\nEnter a new, larger size for the array: ");
    scanf("%d", &newSize);

    // realloc() handles the copying and freeing for us!
    dynamicArray = (int *)realloc(dynamicArray, newSize * sizeof(int));

    // Display all (including the new empty slots)
    printf("\nYour expanded array:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", dynamicArray[i]);
    }

    // 3. FREE: Always clean up your "trash"
    free(dynamicArray);
    printf("\n\nMemory successfully freed.");

    return 0;
}