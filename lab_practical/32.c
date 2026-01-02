#include <stdio.h>

void calculate(int *a, int *b, int *sum, int *diff, int *prod, float *quot);

int main() {
    int x, y;
    int sum, diff, prod;
    float quot;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    calculate(&x, &y, &sum, &diff, &prod, &quot);

    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", diff);
    printf("Multiplication = %d\n", prod);

    if (y != 0)
        printf("Division = %.2f\n", quot);
    else
        printf("Division not possible (division by zero)\n");

    return 0;
}

/* function definition */
void calculate(int *a, int *b, int *sum, int *diff, int *prod, float *quot) {
    *sum  = *a + *b;
    *diff = *a - *b;
    *prod = (*a) * (*b);

    if (*b != 0)
        *quot = (float)(*a) / (*b);
}
