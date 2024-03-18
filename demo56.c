/* . Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array. */

#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }

    int index = 0;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[index++] = arr[i];
        }
    }

    arr[index++] = arr[size - 1];

    return index;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newSize = removeDuplicates(arr, size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of unique elements: %d\n", newSize);

    return 0;
}
