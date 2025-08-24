//Link : https://www.hackerrank.com/challenges/one-month-preparation-kit-two-arrays/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one


#include <stdio.h>
int main(){
    int q;
    scanf("%d", &q);
    while (q--){
        int n, k;
        scanf("%d%d",&n,&k);
        int A[n], B[n];
        for (int i = 0;i< n; i++){
            scanf("%d",&A[i]);
        }
        for (int i = 0;i < n;i++){
            scanf("%d",&B[i]);
        }
        for (int i =0; i < n - 1;i++){
            for (int j = 0; j < n - 1 - i; j++) {
                if (A[j] > A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n - 1; i++){
            for (int j = 0;j < n -1-i;j++){
                if (B[j] < B[j + 1]) {
                    int temp =B[j];
                    B[j]= B[j+1];
                    B[j+1] =temp;
                }
            }
        }
        int valid = 1;
        for (int i = 0; i < n; i++){
            if (A[i] + B[i] < k){
                valid = 0;
                break;
            }
        }
        if (valid){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
    
}
