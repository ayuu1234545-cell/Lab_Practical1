#include <stdio.h>
int main(){

    int unit , sum=0;
for(int i = 1; i <= 7 ; i++){
printf("Enter units used on day %d :" , i );
scanf("%d", &unit);
sum += unit;
}

printf("Total electricity units used in a week = %d" , sum);

return 0;
}