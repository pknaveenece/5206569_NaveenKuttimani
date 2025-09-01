//link https://www.hackerrank.com/challenges/one-month-preparation-kit-sparse-arrays/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one



#include <stdio.h>
#include <string.h>
int main(){
    
    int first, second;
    scanf("%d",&first);
    
    char string[first][100];
    for(int i =0;i < first;i++){
        scanf("%s",string[i]);
    }
    
    
    scanf("%d",&second);
    char string2[second][100];
    for(int i =0;i < second;i++){
        scanf("%s",string2[i]);
    }
    
    
    for(int i =0;i < second;i++){
        int count = 0;
        for(int j = 0;j <first ;j++){
            if(strcmp(string2[i],string[j])==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    
}
