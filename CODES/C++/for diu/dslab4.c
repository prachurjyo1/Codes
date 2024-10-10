#include <stdio.h>

int deleteElement(int arr[], int size, int num) {
    int i, index = -1;

    for (i = 0; i < size; i++) {
        if (arr[i] == num) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  
    } else {
        printf("Number %d not found in the array.\n", num);
    }

    return size;
}

int main() {
    int arr[100], size, num1, num2, num3;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size < 3) {
        printf("Array has fewer than 3 elements. Cannot delete three different numbers.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the first number to delete: ");
    scanf("%d", &num1);
    printf("Enter the second number to delete: ");
    scanf("%d", &num2);
    printf("Enter the third number to delete: ");
    scanf("%d", &num3);


    size = deleteElement(arr, size, num1);


    if (size < 2) {
        printf("Array underflow after deleting the first number.\n");
        return 1;
    }


    size = deleteElement(arr, size, num2);

    if (size < 1) {
        printf("Array underflow after deleting the second number.\n");
        return 1;
    }

    size = deleteElement(arr, size, num3);

    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
