//Link : https://www.hackerrank.com/challenges/one-month-preparation-kit-mini-max-sum/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one

#include <stdio.h>
int main(){
    
    int arr[100];
    int size = 5, temp = 0;
    for(int i = 0 ; i< size; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < size;i++){
        for(int j = i+1; j<size ;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int mini = 0,max = 0;
    long total = 0;
        mini = arr[0];
        max = arr[size-1];
    for(int i = 0;i < size;i++){
        total = total+arr[i];
    }
    
    printf("%ld ",total-max);
    printf("%ld ",total-mini);
}
