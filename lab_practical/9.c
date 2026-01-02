#include <stdio.h>
int main(){
    float account_balance;
printf("Enter account balance:");
scanf("%f" , &account_balance);

float interest_amount = 4000;
float annual_maintainance_charge = 500;
float bonus_factor = 4;
//int linked_account = 2

printf("Addding Interest(4000):%f\n", account_balance+=interest_amount);
printf("Deducting AMC(500):%f\n", account_balance -= annual_maintainance_charge);
printf("Multiplying bonus(4):%f\n", account_balance *= bonus_factor);
printf("Dividing Account 1:%f\n", account_balance/=2);
printf("Dividing Account 2:%f\n" , account_balance);



    return 0;
}