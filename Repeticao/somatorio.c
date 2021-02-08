#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int i = 0;
    int res = 0;
    
    if(a <= b){
        for(i = a; i <= b; i++){
            if(i % 2 == 0 && i % 3 == 0){
                res += i;
            }
        }
        printf("%d", res);
    }       
    else{
        printf("invalido\n");
    }

}