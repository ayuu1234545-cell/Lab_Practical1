#include <stdio.h>

int main() {
int a = 20;
int b = 40;
int sum , sub , product , mod , div;

sum = a + b;
sub = a - b;
product = a * b;
mod = a % b;
div = a / b;

printf("Addition: %d\n" , sum);
printf("subtraction: %d\n" , sub);
printf("product: %d\n" , product);
printf("modulus: %d\n", mod);
printf("Division: %d\n" , div);


    return 0;
}