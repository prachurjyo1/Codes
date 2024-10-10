#include <stdio.h>

int linearSearch(int arr[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

void deleteOneOccurrence(int arr[], int *size, int element) {
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            // Shift elements to the left
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;  
            return;     
        
    }
}}

int main() {
   int arr[100], size, elem;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
     printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &elem);

    int count = linearSearch(arr, size, elem);
    printf("Element %d found %d times.\n", elem, count);

    deleteOneOccurrence(arr, &size, elem);

    count = linearSearch(arr, size, elem);
    if (count > 0) {
        printf("After deletion, element %d found %d times.\n", elem, count);
    } else {
        printf("Element %d not found after deletion.\n", elem);
    }

        for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}