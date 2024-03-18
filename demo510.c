/* 10. Write a function to search the given number into the array using linear search and return the
address of the element. If element is not found it should return NULL. */

#include <stdio.h>

int *linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return &arr[i];
        }
    }
    return NULL;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int *address = linearSearch(arr, size, key);

    if (address != NULL)
    {
        printf("%d found at address %p\n", key, (void *)address);
    }
    else
    {
        printf("%d not found in the array\n", key);
    }

    return 0;
}
