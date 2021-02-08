#include <stdio.h>
int main(){
    int valor = 0;
    int chute1 = 0;
    int chute2 = 0;
    scanf("%d %d %d", &valor, &chute1, &chute2);
    int res1 = 0;
    int res2 = 0;

    if(valor > chute1){
        res1 = valor - chute1;
    }else{
        res1 = chute1 - valor;
    }

    if(valor > chute2){
        res2 = valor - chute2;
    }else{
        res2 = chute2 - valor;
    }

    if(res1 == res2){
        puts("empate");
    }else if(res1 < res2){
        puts("primeiro");
    }else{
        puts("segundo");
    }
    

}   