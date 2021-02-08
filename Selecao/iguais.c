#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c && a == c){
        printf("3\n");
    }else if(a != b && b != c && a != c){
        printf("0\n");
    }else{
        printf("2\n");
    }
        
}