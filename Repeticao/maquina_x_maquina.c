#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h>

int rand_int_fechado(int menor, int maior){
    int num = rand() % (maior - menor + 1) + menor;
}

int main(){
    srand(time(NULL));
    int menor = 1;
    int maior = 999;
    int nmaquina = rand() % (maior - menor + 1) + menor;

    printf("Numero escolhido pela maquina eh: %d\n", nmaquina);
    bool acertou = false;

    for(int i = 0; i < 10; i++){
        int escolhido = rand_int_fechado(menor, maior);
        printf("%d Chances\nChute: %d\n", (10 - i), escolhido);
        if(escolhido == nmaquina){
            puts("Acertou");
            acertou = true;
            break;
        }else if(escolhido < nmaquina){
            puts("Eh maior!");
            menor = escolhido;
        }else{
            puts("Eh menor!");
            maior = escolhido;
        }
    }
    if(!acertou){
        puts("AFFF! Nao ganhei, quero jogar de novo :( ");
    }
}