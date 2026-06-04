#include <stdio.h>

// MIN METHOD: Finds the smallest element and moves it to the front
void selectionSortMin(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the first unsorted element is the minimum
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Found a smaller element
            }
        }
        // Swap the found minimum with the first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int data1[] = {64, 25, 12, 22, 11};
    int data2[] = {64, 25, 12, 22, 11};
    int n = 5;

    printf("Original: "); printArray(data1, n);

    selectionSortMin(data1, n);
    printf("Sorted (Min Method): "); printArray(data1, n);


    return 0;
}