#include <stdio.h>


void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
    

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == target) {
            return mid;

        }


        if (arr[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1;

}

int main() {
    int arr[100], n, target, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the target number to search: ");
    scanf("%d", &target);

    result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Target %d found at position %d in the sorted array.\n", target, result + 1);  // Displaying position starting from 1
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
