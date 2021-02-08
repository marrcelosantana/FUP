#include <stdio.h>
int main(){
    int c = 0;
    scanf("%d", &c);
    int m = 0;
    int pessoas = 0;
    while(pessoas <= 2 * c){
        scanf("%d", &m);
        pessoas = pessoas + m;
        if(pessoas == 0){
            puts("vazio");
        }else if(pessoas > 0 && pessoas < c){
            puts("ainda cabe");
        }else{
            puts("lotado");
        }
        
    }
    puts("hora de partir");
}