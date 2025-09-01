//Link : https://www.hackerrank.com/challenges/one-month-preparation-kit-countingsort1/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one


#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int result[99];
    
    for(int i=0;i<100;i++)
    {
        result[i] = 0;
    }
    int temp;
    
    for(int i=0;i<size;i++)
    {
        temp = arr[i];
        result[temp]++;
    }
    
    for(int i=0;i<100;i++)
    {
        printf("%d ", result[i]);
    }
}