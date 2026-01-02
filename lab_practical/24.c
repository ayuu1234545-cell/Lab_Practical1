#include <stdio.h>

int main() {
    int choice = 1, num, i;

    while (choice != 0) {
        printf("\nPress 1 to print multiplication table");
        printf("\nPress 0 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);

            i = 1;
            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        } else if (choice == 0) {
            printf("Program exited.");
        } else {
            printf("Invalid choice");
        }
    }

    return 0;
}
