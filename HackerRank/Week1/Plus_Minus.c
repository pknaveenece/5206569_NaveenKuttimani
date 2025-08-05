#include<stdio.h>
int main(){
    int size, arr[100];
    scanf("%d",&size);
    int pos = 0, neg = 0; 
    int zeros = 0;
    
    for(int i = 0 ; i<size ; i++){
        scanf("%d",&arr[i]);
        if (arr[i]==0) {
            zeros++;
        }
        else if (arr[i] < 0) {
            neg++;
        }
        else {
            pos++;
        }
    } 
    
    printf("%f\n", (float)pos/size);
    printf("%f\n", (float)neg/size);
    printf("%f\n", (float)zeros/size);
}
