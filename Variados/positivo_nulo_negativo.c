#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);

    if(n > 0){
        puts("positivo");
    }else if(n < 0){
        puts("negativo");
    }else{
        puts("nulo");
    }
}