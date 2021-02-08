#include "brain.h"

int main() {
    int tabu[5][5];
    int navios[3][2];
    int tiro[2];
    int tentativas = 0;
    int acertos = 0;

    iniciar_tabu(tabu);
    iniciar_navios(navios);

    printf("\n");

    for(;acertos != 3;){
        show_tabu(tabu);
        atirar(tiro);
        tentativas++;

        if(acertou(tiro,navios)){
            dica(tiro,navios,tentativas);
            acertos++;
        }else
            dica(tiro,navios,tentativas);

        alterar_tabu(tiro,navios,tabu);

        printar_acertos(acertos);
    }  
    printf("\nPARABENS!! Voce acertou todos os navios.\nVoce teve 3 acertos em %d tentativas, continue se aprimorando, e divirta-se jogando novamente!\n", tentativas);
    show_tabu(tabu);
    puts("");
}
