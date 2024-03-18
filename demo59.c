/* 9. Write a function to search the given number into the array using binary search and return the
index of the element. If element is not found it should return -1. */

#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int index = binarySearch(arr, size, key);

    if (index != -1)
    {
        printf("%d found at index %d\n", key, index);
    }
    else
    {
        printf("%d not found in the array\n", key);
    }

    return 0;
}
