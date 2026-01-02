#include <stdio.h>

int main(){
int att , count = 0 ;

for(int i = 1; i <= 30 ; i ++ ){
printf("Day %d(1=Present,0=Absent) :", i);
scanf("d", &att);
if(att == 1){
count += 1;}
}

printf("Total present days = %d" , count);

return 0;
}