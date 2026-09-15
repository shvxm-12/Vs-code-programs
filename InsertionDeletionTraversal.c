#include<stdio.h>

#define MAX 100

void traverse(int arr[], int n)
{
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int n, int pos, int val)
{
    if (n >= MAX)
    {
        printf("Array is full, cannot insert.\n");
        return n;
    }
    if (pos < 0 || pos > n)
    {
        printf("Invalid position.\n");
        return n;
    }
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    return n + 1;
}

int delete(int arr[], int n, int pos)
{
    if (n <= 0)
    {
        printf("Array is empty, cannot delete.\n");
        return n;
    }
    if (pos < 0 || pos >= n)
    {
        printf("Invalid position.\n");
        return n;
    }
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main()
{
    int arr[MAX], n = 0, choice, pos, val;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Traverse\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse(arr, n);
            break;
        case 2:
            printf("Enter position (0-based index): ");
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &val);
            n = insert(arr, n, pos, val);
            break;
        case 3:
            printf("Enter position (0-based index): ");
            scanf("%d", &pos);
            n = delete(arr, n, pos);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
