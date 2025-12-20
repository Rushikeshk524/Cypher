#include <stdio.h>
#include <stdlib.h>

void insert_arr(int a[], int *n)
{
    int i, x, pos;

    printf("Enter number to be inserted: ");
    scanf("%d", &x);
    printf("Enter position (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }

    for (i = *n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    (*n)++;
    printf("Value inserted successfully!\n");
}

void delete_arr(int a[], int *n)
{
    int i, pos;
    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= *n) {
        printf("Invalid position!\n");
        return;
    }

    for (i = pos; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }

    (*n)--;
    printf("Value deleted successfully!\n");
}

void disp_arr(int a[], int n)
{
    int i;

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int i, choice, n, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_arr(a, &n);
            break;
        case 2:
            delete_arr(a, &n);
            break;
        case 3:
            disp_arr(a, n);
            break;
        case 4:
            printf("Exiting Program.\n");
            exit(1);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}