#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void iniciar_tabu(int tabu[][5]){ //função para iniciar o tabuleiro.
    for(int linha = 0; linha < 5; linha ++)
        for(int coluna = 0; coluna < 5; coluna++)
            tabu[linha][coluna] = -1;
}

void show_tabu(int tabu[][5]){ //função para mostrar o tabuleiro.
    printf("  1 2 3 4 5");
    printf("\n");
    char letra[5] = {'A', 'B', 'C', 'D', 'E'};
    for(int linha = 0 ; linha < 5 ; linha++){
        printf("%c", letra[linha]);
        for(int coluna = 0; coluna < 5; coluna++){
            if(tabu[linha][coluna] == -1){
                    printf(" ~");
            }else if(tabu[linha][coluna] == 0){
                    printf(" x");
            }else if(tabu[linha][coluna] == 1){
                    printf(" @");
            }

        }
        printf("\n");
    }

}

void iniciar_navios(int navios[][2]){ //inicializando os navios na matriz.
    srand(time(NULL));
    for(int navio = 0; navio < 3; navio++){
        navios[navio][0] = rand() % 5;
        navios[navio][1] = rand() % 5;

        for(int antigo = 0; antigo < navio; antigo++){
            if((navios[navio][0] == navios[antigo][0]) && (navios[navio][1] == navios[antigo][1]))
                do{
                    navios[navio][0] = rand() % 5;
                    navios[navio][1] = rand() % 5;
                }while((navios[navio][0] == navios[antigo][0]) && (navios[navio][1] == navios[antigo][1]));
            }

        }
    }          
void atirar(int tiro[2]){ //Função para escolher a linha e coluna na qual vai atirar.
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'a', 'b', 'c', 'd', 'e'}, coluna = '0';
    puts("Lembrando: '@' equivale  navio alvejado, 'x' equivale a erro e '~' equivale a lugar ainda nao atirado.");
    printf("Digite a linha e a coluna desejada! Exemplo: (a1, b4, c3...etc):\n");
    for(int b = 0; b != 1;){
        scanf(" %c %d", &coluna, &tiro[1]);
        for(int i = 0; i < 10; i++){
            if(coluna == linha[i] && tiro[1] >= 0 && tiro[1] <= 5){
                tiro[0] = i % 5;
                b += 1;
                break;
            }
        }
        if(b == 1)
            break;
        puts("Arriegua, letra ou numero invalido, digita direito mah!");
        printf("Vai, agora digita a Linha e Coluna certa: ");
    }
    for(int i = 0; i < 10; i++){
        if(coluna == linha[i]){
            tiro[0] = i % 5;
        }
    }
    tiro[1] -= 1;
}

int acertou(int tiro[2], int navios[][2]){  //Função para determinar quando acerta ou erra o tiro.
    char letra[5] ={'A', 'B', 'C', 'D', 'E'};
    for(int navio = 0; navio < 3; navio++){
        if(tiro[0] == navios[navio][0] && tiro[1] == navios[navio][1]){
            printf("+----------------------------+\n..Voce acertou o tiro (%c,%d)..\n+----------------------------+\n",letra[tiro[0]],tiro[1]+1);
            return 1;
        }
    }
    printf("+----------------------------+\n..Voce Errou o tiro em (%c,%d)..\n+----------------------------+\n",letra[tiro[0]],tiro[1]+1);
    return 0;
}

void printar_acertos(int acertos){ //Função para mostrar na tela o número de navios encontrados.
    printf("..Voce acertou {%d} navio(s), de 3 possiveis..\n+----------------------------+\n", acertos);
}

void dica(int tiro[2], int navios[][2], int tentativa){ //Função para ajudar na proxima jogada.
    int linha = 0;
    int coluna = 0;
    char letra[5] = {'A', 'B', 'C', 'D', 'E'};
    //conta quantos navios há na linha tiro[0]
    for(int fila = 0; fila < 3; fila++){
        if(navios[fila][0] == tiro[0])
            linha++;
        if(navios[fila][1] == tiro[1])
            coluna++;
    }
    printf("\nDica %d: \nLinha {%c} tem {%d} navios!\nColuna {%d} tem {%d} navios!\n",tentativa,letra[tiro[0]],linha,tiro[1]+1,coluna);
}

void alterar_tabu(int tiro[2], int navios[][2], int tabu[][5]){ //Função para alterar o tabuleiro após a jogada.
    if(acertou(tiro,navios)){
        tabu[tiro[0]][tiro[1]] = 1;
    }
    else
        tabu[tiro[0]][tiro[1]] = 0;
}
