#include <stdio.h>
int main (){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if((a % 3 == 0 && b % 3 == 0) || (a % 5 == 0 && b % 5 == 0)){
        puts("sim");
    }else{
        puts("nao");
    }
}