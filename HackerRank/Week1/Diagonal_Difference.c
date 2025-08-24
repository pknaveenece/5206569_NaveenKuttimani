#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size][size];
    
    int first =0 , second =0;
    for(int i = 0; i <size; i++){
        for(int j = 0; j < size;j++){
            scanf("%d",&arr[i][j]);   
        }
    }
    
    for(int i = 0 ; i< size; i++){
        first = first + arr[i][i];
        second = second + arr[i][size - 1-i];
    }
    printf("%d",abs(first -second));
    
}
