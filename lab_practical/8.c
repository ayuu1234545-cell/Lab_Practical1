#include <stdio.h>
#include <string.h>
int main(){
    char u[20] ;
char password[20] ;

char u_username[10] = "ayush";
char p_password[10] = "4567";

printf("Enter registered username:");
scanf("%s" , u);

printf("Enter valid password:");
scanf("%s" , password);

if (strcmp(u, u_username) == 0 && strcmp(password, p_password) == 0) {
printf("Login Successful.\n");
} else {
printf("Invalid Login.\n");
}



    return 0;
}