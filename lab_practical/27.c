#include <stdio.h>

int square(int n);   // function declaration

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);     // function call

    printf("Square of %d is %d", num, result);

    return 0;
}

/* function definition */
int square(int n) {
    return n * n;
}
