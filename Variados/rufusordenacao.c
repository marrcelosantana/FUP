#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b && a > c && b > c){
        printf("G M P");
    }else if(a > b && a > c && b < c){
        printf("G P M");
    }else if(b > a && b > c && a < c){
        printf("P G M");
    }else if(c > a && a > b){
        printf("M P G");
    }else if(c > a && c > b && b < c){
        printf("P M G");
    }else {
        printf("M G P");
    }
    
}