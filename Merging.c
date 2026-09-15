#include <stdio.h>

#define MAX 100

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i, j;
    // Copy first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    // Copy second array
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
}

int main() {
    int arr1[MAX], arr2[MAX], merged[MAX];
    int n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("\nMerged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}