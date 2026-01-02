#include <stdio.h>
int main(){
    
int price ; float sum=0;
for(int i = 1; i <= 5 ; i++){
printf("Enter price of item %d :" , i );
scanf("%d", &price);
sum+=price;
}

printf("Total Bill = %.2f" , sum);

 return 0;
}