// Link  : https://www.hackerrank.com/challenges/one-month-preparation-kit-pangrams/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one


#include<stdio.h>

int main(){
    char arr[10001];
    int found[26],i,unique =0;
    
    for(int i = 0;i < 26;i++){
        found[i] = 0;
    }
    
    fgets(arr,10001,stdin);
    
    for(i =0; arr[i] !='\0'; i++)
    {
        char letter = arr[i];
        
        if(letter >= 'A' && letter <= 'Z'){
            letter = letter +32;
        }
        
        if(letter >= 'a' && letter <= 'z'){
            int pos = letter - 'a';
            if(found[pos]==0){
                found[pos] = 1;
                unique++;
                
                if (unique == 26){
                    break;
                }
            }
        }
        
    }
    
    if(unique == 26){
        printf("pangram");
    }
    else {
    printf("not pangram");
    }
}
