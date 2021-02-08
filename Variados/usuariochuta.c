#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    printf("Digite o valor que voce quer apostar: R$");
    scanf("%d", &money);
    bool acertou = false;

    int nchutes = 0;
    for(int i = 0; i < 10; i++){
        printf("Voce tem %d chances: digite seu chute: ", (10 - i));
        int chute = 0;
        scanf("%d", &chute);
        if(chute == escolhido){
            puts("Acertou!");
            acertou = true;
            nchutes ++;
            break;
        }else if(chute > escolhido){
            puts("Eh menor");
            nchutes ++;
        }else{
            puts("Eh maior");
            nchutes ++;
        }
    }
    if(!acertou){
        puts("Errou! Nao foi dessa vez :(");    
    }else if(nchutes == 1){
        puts("Voce eh o Chuck Norris!!");
    }else if(nchutes <= 4){
        puts("Voce eh o Chapolin!!!");
    }else if(nchutes <= 9){
        puts("Voce eh o Jaspion!!");
    }else if(nchutes == 10){
        puts("Voce eh Cagado hein!");
    }

    premio = (10 - nchutes) * money;
    printf("Voce faturou: R$%d\n", premio);


}