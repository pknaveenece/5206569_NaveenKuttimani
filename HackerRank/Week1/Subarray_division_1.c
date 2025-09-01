//Link : https://www.hackerrank.com/challenges/one-month-preparation-kit-the-birthday-bar/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one


#include <stdio.h>

int main() {
    int n,d,m;
    scanf("%d", &n);
    int s[n];
    for(int i = 0;i < n; i++){
        scanf("%d",&s[i]);
    }
    scanf("%d %d",&d,&m);

    int count = 0,sum = 0;
    for(int i = 0 ;i < m;i++){
        sum+=s[i];
    }
    if(sum == d) count++;
    for(int i = m;i < n;i++){
        sum = sum - s[i-m] + s[i];
        if(sum == d) count++;
    }
    printf("%d\n", count);
    return 0;
}
