#include <stdio.h>
#include <string.h>

int main(){
    char ch[11];
    char result[9];
    
    scanf("%s",ch);
    
    int hour;
    
    hour = (ch[0]-'0')*10 + (ch[1]-'0');
    
    if(ch[8]=='A'){
        if(hour==12){
            hour = 0;
        }
        
    }
    else {
    if(hour!=12){
        hour = hour + 12;
    }
    }
    
    sprintf(result, "%02d:%c%c:%c%c", hour, ch[3], ch[4], ch[6], ch[7]);
    printf("%s",result);

}
