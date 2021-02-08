#include <stdio.h>

int main(){
    int size = 0;
    scanf("%d", &size);
    
    int somapar = 0;
    int somaimpar = 0;
    int i = 0;

    for(i = 0; i < size; i++){
        int num = 0;
        scanf("%d", &num);
        if(num % 2 == 0)
            somapar += num;
        else
            somaimpar += num;
    }

    if(somapar == somaimpar){
        puts("empate");
    }else if(somapar > somaimpar){
        puts("rebeldes");
    }else{
        puts("soldados");
    }
}