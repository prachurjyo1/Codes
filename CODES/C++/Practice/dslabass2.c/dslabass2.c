#include <stdio.h>
// function for linear searching
int linearSearch(int arr[], int size, int target) {
for (int i = 0; i < size; i++) {
if (arr[i] == target) {
return i; //if element found then return index
}
}
return -1; //if element not found
}
int main() {
int arr[10] = {34, 7, 23, 32, 5, 62, 78, 3, 89, 45};
int target = 62; //the element we'll search
int index = linearSearch(arr, 10, target);
if (index != -1) {
printf("Linear Search: Element found at index %d\n", index);
} else {
printf("Linear Search: Element not found\n");
}
return 0;
}
