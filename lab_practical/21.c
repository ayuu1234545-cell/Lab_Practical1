#include <stdio.h>

int main( ){
float dist ; float sum= 0;
for(int i = 1; i <= 30 ; i++ ){
printf("Enter distance walked on day %d (km):", i );
scanf("%f", &dist);
sum+=dist;
}
printf("Total distance walked = %.2f" , sum);
return 0;
}