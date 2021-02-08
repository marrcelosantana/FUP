#include <stdio.h>
int main(){
    int P = 0;
    int F = 0;
    char T = ' ';
    
    scanf(" %c", &T);
    scanf("%d", &F);
    
    
    if(T == 'b'){
        T = 20;
    }else if(T == 'c'){
        T = 18;
    }
    P = ((F * T) - 80) / 10;
    
    if(P < 150){
        puts("Fraco, nem passou");
    }else if(P < 180){
        puts("Perfeito");
    }else if(P < 210){
        puts("Satisfeito");
    }else {
        puts("Muito forte, bola fora");
    }
}