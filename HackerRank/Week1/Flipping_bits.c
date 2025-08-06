
//Link = https://www.hackerrank.com/challenges/one-month-preparation-kit-flipping-bits/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one


#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    
    unsigned int n;
     
    for(int i = 0;i < size;i++){
        scanf("%u",&n);
        
        unsigned int flip = ~n & 0xFFFFFFFFF;
        
        printf("%u\n",flip);
    }
}
