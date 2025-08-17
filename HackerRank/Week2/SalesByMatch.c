//link : https://www.hackerrank.com/challenges/one-month-preparation-kit-sock-merchant/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-two


#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i = 0;i < n; i++){
        scanf("%d",&arr[i]);
    }
    int results = market(n,arr);
    
    printf("%d",results);
}


int market(int n,int arr[]){
    int count[101] = {0};
    int pairs = 0;
    
    for(int i = 0;i < n;i++){
        count[arr[i]]++;
    }
    
    for(int i =0;i <101;i++){
        pairs = pairs + count[i]/2;
    }
    
    return pairs;
}