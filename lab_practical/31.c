#include <stdio.h>

int max(int *a, int *b);   // function declaration

int main() {
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = max(&x, &y);   // passing addresses

    printf("Maximum number is %d", result);

    return 0;
}

/* function definition */
int max(int *a, int *b) {
    if (*a > *b)
        return *a;
    else
        return *b;
}
