#include <stdio.h>
#include "Q2.h"

int main() {
    accept_array();
    print_array(arr, w);
    printf("Enter the marks of %d subjects:\n", w);

    int sum = total(arr, w);
    printf("sum=%d", sum);
    printf("Avg=%d", (sum / w));

    return 0;
}

int total(int arr[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        c += arr[i];
    }
    return c;
}
