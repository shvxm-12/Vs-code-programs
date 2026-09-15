#include <stdio.h>

#define MAX 100

int main() {
    int arr1[MAX], arr2[MAX], product[MAX];
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

    // Perform multiplication
    for (i = 0; i < n; i++) {
        product[i] = arr1[i] * arr2[i];
    }

    printf("\nResultant array after multiplication:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", product[i]);
    }
    printf("\n");

    return 0;
}