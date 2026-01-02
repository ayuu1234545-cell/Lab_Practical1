
#include <stdio.h>
int main(){
int arr [50], num, element, found = 0;

Printf ("Enter the no. of element");
Scanf ("d", & num);
for (int i=0; i<num; i++) {
Scant ("%d", &arr [i]);
}

print ("Enter the Element to serach");
scant ("%d", & element);

for (int j= 0; j <num ; j++){
if (arr [j] = element) {
print(" Element found at %d loc", j);
found = 1;
break;
}
}
if ( found == 0){
printf (" Element not found");
}
return 0;
}
