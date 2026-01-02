#include <stdio.h>

int main() {
int a = 20;
     float b = 22.44;
     char c  =  'a';
double d = 3.143792;

printf("int: %d\n" , a);
printf("float: %f\n", b);
printf("char: %c\n" ,c);
printf("double: %lf\n" ,d);

printf("Sizes:\n");
printf("Size of int: %zu \n" , sizeof(a));
printf("Size of float: %zu \n" , sizeof(b));
printf("Size of char: %zu \n", sizeof(c));
printf("Size of double: %zu \n" , sizeof(d));

return 0;

}