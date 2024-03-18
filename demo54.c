/* 4. Write a function to calculate maximum of the array elements. Write another function to
calculate maximum of the array elements. */
#include <stdio.h>

int max1(int arr[], int size) {
    int maximum = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    return maximum;
}

int max2(int arr[], int size) {
    int maximum = arr[0];
    for (int i = 1; i < size; i++) {
        maximum = (arr[i] > maximum) ? arr[i] : maximum;
    }
    return maximum;
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum using approach 1: %d\n", max1(arr, size));
    printf("Maximum using approach 2: %d\n", max2(arr, size));

    return 0;
}
