#include <stdio.h>

long long factorial(int n);   // function declaration

int main() {
    int num;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers");
    } else {
        result = factorial(num);
        printf("Factorial of %d is %lld", num, result);
    }

    return 0;
}

/* function definition */
long long factorial(int n) {
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}
