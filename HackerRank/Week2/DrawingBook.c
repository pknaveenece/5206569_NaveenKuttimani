// Link https://www.hackerrank.com/challenges/one-month-preparation-kit-drawing-book/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-two


#include <stdio.h>

int main() {
    int n, p;
    scanf("%d", &n);
    scanf("%d", &p);

    int front = p/2;
    int back= (n/2) -(p/2);

    if (front< back) {
        printf("%d\n", front);
    } 
    else {
        printf("%d\n",back);
    }

}
