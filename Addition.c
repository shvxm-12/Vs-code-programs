#include <stdio.h>

#define MAX 100

int main() {
    int arr1[MAX], arr2[MAX], sum[MAX];
    int n, i;

    printf("Enter number of elements in the arrays: ");
    scanf("%d", &n);

    printf("Enter %d elements for first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Perform addition
    for (i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("\nResultant array after addition:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}
