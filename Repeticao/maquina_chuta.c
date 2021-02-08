#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int rand_int_fechado(int menor, int maior){
    int num = rand()     % (maior - menor + 1) + menor;
}

int main(){
    srand(time(NULL));
    int menor = 1;
    int maior = 999;
    int mynumber = 0;
    int money = 0;
    int nchutes = 0;

    printf("Digite o valor que voce quer apostar: R$");
    scanf("%d", &money);
    puts("Escolha  um numero de 0 a 1000:");
    scanf("%d", &mynumber);

    bool ganhei = false;

    for(int i = 0; i < 10; i++){        
        int escolhido = rand_int_fechado(menor, maior);
        printf("Eu tenho %d chances.\nEscolhi o numero %d no intervalo de (1 a 999)\n", (10 - i), escolhido);
        if(escolhido == mynumber){
            puts("Acertei! ");
            ganhei = true;
            nchutes++;
            break;
        }else if(escolhido < mynumber){
            puts("Eh maior! ");
            nchutes++;
            menor = escolhido;
        }else{
            puts("Eh menor! ");
            nchutes++;
            maior = escolhido;
        }

    }if(!ganhei){
        puts("AFFF! Nao ganhei, quero jogar de novo :( ");
    }else if(nchutes == 1){
        puts("Voce eh o Chuck Norris!!");
    }else if(nchutes <= 4){
        puts("Voce eh o Chapolin!!!");
    }else if(nchutes <= 9){
        puts("Voce eh o Jaspion!!");
    }else if(nchutes == 10){
        puts("Voce eh Cagado hein!");
    }
    
}