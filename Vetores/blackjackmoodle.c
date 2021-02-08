#include <stdio.h>
int main(){
    int num_cartas = 0;
    scanf("%d", &num_cartas);

    int as = 0;
    int carta = 0;
    int total = 0;
    for(int i = 0; i < num_cartas; i++){
        scanf("%d", &carta);
        if(carta > 9){
            carta = 10;
        }
        if(carta == 1){
            carta = 11;
            as++;
        }    
        total += carta;        
    }
    for(int i = total; total > 21 && as > 0;){
        total -= 10;
        as--;
    }
    printf("%d", total);    
}