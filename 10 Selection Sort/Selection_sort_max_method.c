#include <stdio.h>


// MAX METHOD: Finds the largest element and moves it to the back
void selectionSortMax(int arr[], int n) {
    int i, j, maxIndex, temp;
    for (i = 0; i < n - 1; i++) {
        maxIndex = 0; // Start searching from the beginning
        // n - i is the boundary of the unsorted part
        for (j = 1; j < n - i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap the found maximum with the last unsorted element
        temp = arr[maxIndex];
        arr[maxIndex] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
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

    selectionSortMax(data2, n);
    printf("Sorted (Max Method): "); printArray(data2, n);

    return 0;
}