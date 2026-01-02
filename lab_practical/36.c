#include <stdio.h>
int main(){
    int arr[100],n;

    printf("Enter the array elements:");
    scanf("%d", &n);

    printf("Enter array elements:");
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int j=0 ; j<n ; j++){
        printf("%d",arr[j]);
    }

    // Deletion
    int pos=3;
    for(int k=pos; k<(n-1) ; k++){
        arr[k] = arr[k+1];
    }
    n--;

     
    for(int j=0 ; j<n ; j++){
        printf("%d",arr[j]);

    return 0 ;
}