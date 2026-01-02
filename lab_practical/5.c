#include <stdio.h>
int main(){

int x, y, result;
x = 5;
y = 2;
result = ++x + y;
printf ("pre\n");
printf("Result: %d\n", result); //6+2=8
printf("x after: %d\n\n", x); //6

x = 5;
y = 2;
result = x++ + y; //5+2
printf ("post\n");
printf("Result: %d\n", result);//7
printf("x after: %d\n", x);//6



    return 0;
}