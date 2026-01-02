#include <stdio.h>

int largest(int a, int b, int c);   // function declaration

int main() {
    int x, y, z, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    result = largest(x, y, z);   // function call

    printf("Largest number is %d", result);

    return 0;
}

/* function definition */
int largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
