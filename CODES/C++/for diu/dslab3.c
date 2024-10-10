#include <stdio.h>


int main() {
    int arr[100], size, num1, num2, i, j, index;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

   
    if (size < 2) {
        printf("Array has fewer than 2 elements. Cannot delete two different numbers.\n");
        return 1;
    }
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
  
    printf("Enter the first number to delete: ");
    scanf("%d", &num1);
    printf("Enter the second number to delete: ");
    scanf("%d", &num2);
 
    index = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == num1) {
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
        printf("Number %d not found in the array.\n", num1);
    }
   
    if (size < 1) {
        printf("Array underflow after deleting the first number.\n");
        return 1;
    }
  
    index = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == num2) {
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
        printf("Number %d not found in the array.\n", num2);
    }

    printf("Updated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
