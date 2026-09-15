#include <stdio.h>

#define MAX 100

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid; // found
        } else if (arr[mid] < key) {
            low = mid + 1; // search right half
        } else {
            high = mid - 1; // search left half
        }
    }
    return -1; // not found
}

int main() {
    int arr[MAX], n, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = binarySearch(arr, n, key);

    if (pos != -1) {
        printf("Element %d found at position %d (index %d).\n", key, pos + 1, pos);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
