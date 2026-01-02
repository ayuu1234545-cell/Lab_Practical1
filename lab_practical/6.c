#include <stdio.h>
int main(){

    char name[20] ;
float hra , da ,salary, gross_salary , income_tax , net_salary ;
printf("Enter Your Name:");
scanf("%s" , name);
printf("Hello %s hope you are fine lets proceed further\n" , name);

printf("Please enter your salary:");
scanf("%f" , &salary);

hra = 0.20 * salary ;
printf("Your House Rent Allowance(HRA) is %f\n" , hra);

da = 0.10 * salary ;
printf("Dearness Allowance(DA) is %f\n" , da);

gross_salary = salary + hra + da ;
printf("Gross Salary is %f\n" , gross_salary);

income_tax = 0.05 * gross_salary ;
printf("Income Tax is %f\n" , income_tax);

net_salary = gross_salary - income_tax ;
printf("Net Salary is %f\n" , net_salary);



    return 0;
}