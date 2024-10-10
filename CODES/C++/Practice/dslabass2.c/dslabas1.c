#include <stdio.h>

// Function to sort the array using bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[10] = {34, 7, 23, 32, 5, 62, 78, 3, 89, 45};
    int target = 62; // The element we'll search

    // Sort the array
    bubbleSort(arr, 10);

    // Perform binary search
    int index = binarySearch(arr, 10, target);

    if (index != -1) {
        printf("Binary Search: Element found at index %d\n", index);
    } else {
        printf("Binary Search: Element not found\n");
    }

    return 0;
}
