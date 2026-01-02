#include <stdio.h>

void factorial(int n, long long *result);   // function declaration

int main() {
    int num;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers");
    } else {
        factorial(num, &fact);   // call by reference
        printf("Factorial of %d is %lld", num, fact);
    }

    return 0;
}

/* function definition */
void factorial(int n, long long *result) {
    int i;
    *result = 1;

    for (i = 1; i <= n; i++) {
        *result = (*result) * i;
    }
}
