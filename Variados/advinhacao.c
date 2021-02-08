#include <stdio.h>
#include <stdlib.h>//rand e srand
#include <time.h> //time
#include <stdbool.h>

int rand_int_fechado(int menor, int maior){
    int num = rand() % (maior - menor + 1) + menor;
}

int main(){
    srand(time(NULL));
    int escolhido = rand_int_fechado(1, 99);
    int money = 100;
    int premio = 0;
    puts("Escolhi um numero entre ]0, 100[");
    printf("Valor que voce quer apostar: R$");
    scanf("%d", &money);
    bool acertou = false;

    int nchutes = 0;
    for(int i = 0; i < 10; i += 1){
        printf("%d chances: digite o chute: ", (10 - i));
        int chute = 0;
        scanf("%d", &chute);
        if(chute == escolhido){
            puts("Acertou");
            acertou = true;
            nchutes+=1;
            break;
        }else if(chute > escolhido){
            puts("Eh menor");
            nchutes+=1;
        }else{
            puts("Eh maior");
            nchutes+=1;
        }
    }
    if(!acertou){
        puts("Errou");    
    }else if(nchutes == 1){
        puts("Voce eh o Chuck Norris");
    }else if(nchutes <= 4){
        puts("Voce eh o Chapolin");
    }else if(nchutes <= 9){
        puts("Voce eh o Jaspion");
    }else if(nchutes == 10){
        puts("Voce eh Cagado");
    }

    premio = (10 - nchutes) * money;
    printf("Voce ganhou: R$%d\n", premio);


}