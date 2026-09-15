#include <stdio.h>

#define MAX 100

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // return index if found
        }
    }
    return -1; // not found
}

int main() {
    int arr[MAX], n, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = linearSearch(arr, n, key);

    if (pos != -1) {
        printf("Element %d found at position %d (index %d).\n", key, pos + 1, pos);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
