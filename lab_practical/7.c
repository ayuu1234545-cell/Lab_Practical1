#include <stdio.h>
int main(){
    float account_1 , account_2 ;
printf("Enter account_1 balance:");
scanf("%f" , &account_1 );

printf("Enter account_2 balance:");
scanf("%f", &account_2 );

int greater1=(account_1>account_2);
int greater2=(account_2>account_1);

//Using relational operators
printf("Balance in account1 is more than balace in account2:%d\n" , greater1) ;
printf("Balance in account2 is more than balace in account1:%d" , greater2) ;



    return 0;
}