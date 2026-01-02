#include <stdio.h>
int main(){
    int arr[5]= {32, 28, 55, 10, 12};
    int temp;

    for(int i=0; i<5-1; i++){
        for(int j=0; j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j] = temp;
                
            }
           
        }
    }
   
    return 0;

}