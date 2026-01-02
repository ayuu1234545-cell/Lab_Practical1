#include <stdio.h>

int main() {
    int day;

    /* Part (a): Print full weekly schedule */
    printf("Weekly Lecture Schedule:\n");

    for (day = 1; day <= 6; day++) {
        switch (day) {
            case 1:
                printf("1. Monday    : Mathematics\n");
                break;
            case 2:
                printf("2. Tuesday   : Programming in C\n");
                break;
            case 3:
                printf("3. Wednesday : Digital Electronics\n");
                break;
            case 4:
                printf("4. Thursday  : Data Structures\n");
                break;
            case 5:
                printf("5. Friday    : Operating Systems\n");
                break;
            case 6:
                printf("6. Saturday  : Lab Practical\n");
                break;
        }
    }

    /* Part (b): User input */
    printf("\nEnter day number (1 to 6) to view schedule: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday : Mathematics");
            break;
        case 2:
            printf("Tuesday : Programming in C");
            break;
        case 3:
            printf("Wednesday : Digital Electronics");
            break;
        case 4:
            printf("Thursday : Data Structures");
            break;
        case 5:
            printf("Friday : Operating Systems");
            break;
        case 6:
            printf("Saturday : Lab Practical");
            break;
        default:
            printf("Invalid input! Please enter a number from 1 to 6.");
    }

    return 0;
}
