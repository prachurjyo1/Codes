#include <stdio.h>

void deleteElement(int arr[], int *size, int element) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            found = 1;
            
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;  
            i--; 
        }
    }
    if (!found) {
        printf("This element can not be deleted as it is not exist\n");
    }
}

int main() {
    int arr[100], size, elem1, elem2, elem3;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
     printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
   
    printf("Enter two elements to delete: ");
    scanf("%d %d", &elem1, &elem2);

    deleteElement(arr, &size, elem1);
    deleteElement(arr, &size, elem2);

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}