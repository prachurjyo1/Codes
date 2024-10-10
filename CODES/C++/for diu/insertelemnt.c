#include <stdio.h>

int main() {
    int arr[100];
    int n, position, value;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be inserted: ");
    scanf("%d", &position);
    printf("Enter the value of the element to be inserted: ");
    scanf("%d", &value);

    if (position < 1 || position > n + 1) {
        printf("Invalid position\n");
        return 1;
    }

    for (int i = n; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = value;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
