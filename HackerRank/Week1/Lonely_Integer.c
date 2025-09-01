
//Link :https://www.hackerrank.com/challenges/one-month-preparation-kit-lonely-integer/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one


#include <stdio.h>
int main(){
    int arr[100],size = 0,sample;
    scanf("%d",&size);
    
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < size;i++){
        
        sample = 1;
        
        for(int j = 0; j < size ;j++){
            
            if(i != j && arr[i] == arr[j]){
                sample = 0;
                break;
            }
            
        }
        if(sample){
            printf("%d ",arr[i]);
        }
    }
}
