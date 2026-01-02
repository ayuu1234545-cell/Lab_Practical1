#include <stdio.h>
int main(){
    int arr[100],n;

    printf("Enter the array elements:");
    scanf("%d", &n);

    printf("Enter array elements:");
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("First five elements are:");
    for(int j=0 ; j<5 ; j++){
        printf("%d",arr[j]);
    }
    return 0 ;
}