#include <stdio.h>

// Linear Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // return index if found
        }
    }
    return -1; // not found
}

// Binary Search (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100], n, key, choice, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    printf("\nChoose search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (sorted array)\n");
    scanf("%d", &choice);

    if (choice == 1) {
        pos = linearSearch(arr, n, key);
    } else {
        pos = binarySearch(arr, n, key);
    }

    if (pos != -1) {
        printf("Element %d found at position %d (index %d).\n", key, pos + 1, pos);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
