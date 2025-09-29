#include <stdio.h>

int main() {
    int a, b, temp;
    int choice;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Choose method to swap:\n");
    printf("1. Using temporary variable\n");
    printf("2. Without using temporary variable\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Using temporary variable
        temp = a;
        a = b;
        b = temp;
    } else if (choice == 2) {
        // Without using temporary variable
        a = a + b;
        b = a - b;
        a = a - b;
    } else {
        printf("Invalid choice!\n");
        return 1;  // Exit program due to invalid input
    }

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

