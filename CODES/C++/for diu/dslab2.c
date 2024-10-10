#include <stdio.h>

int main() {
    int arr[100];
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

        printf("Enter the element to delete: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
           for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;

        
    } 
    }
    printf("New array \n");

        for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
      


    
   

    return 0;
}
