#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void introduzir_hist(int histjog[], int histmesa[]){ //Função para introduzir os históricos de cartas.
    for(int i = 0; i < 25; i++){
        histjog[i] = 0;
        histmesa[i] = 0;
    }
}
void show_carta(int carta){ //Função para identificar as cartas.
    if(carta == 1)
        printf("A");
    if(carta == 11)
        printf("J");
    if(carta == 12)
        printf("Q");    
    if(carta == 13)
        printf("K");
    if(carta > 1 && carta <= 10)
        printf("%d", carta);              
}   
void show_hist_mesa(int histmesa[], int z){ //Função para mostrar o histórico de cartas da mesa.
    if(histmesa[z] == 1)
        printf("A ");
    else if(histmesa[z] == 11)
        printf("J ");
    else if(histmesa[z] == 12)
        printf("Q ");
    else if(histmesa[z] == 13)
        printf("K "); 
    else
        printf("%d ", histmesa[z]);
}
void show_hist_jog(int histjog[], int z){ //Função para mostrar o histórico de cartas do jogador.
    if(histjog[z] == 1)
        printf("A ");
    else if(histjog[z] == 11)
        printf("J ");
    else if(histjog[z] == 12)
        printf("Q ");
    else if(histjog[z] == 13)
        printf("K "); 
    else
        printf("%d ", histjog[z]); 
}
int main(){
    int carta = 0;
    int as = 0;
    int total = 0;
    int totalmesa = 0;
    int stop = 0;
    int size = 1;
    int sizemesa = 1;
    int histjog[25] = {0};
    int histmesa[25] = {0};
    srand(time(NULL));

    introduzir_hist(histjog, histmesa);

    for(int i = 0; i != -1; i++){
        if(i > 1)
            size++;
        if(i == 0)
            printf("Mesa recebeu {");
        else
            printf("Voce recebeu {");
        carta = rand() % 13 + 1;
        show_carta(carta);
        printf("}");

        if(i == 0){
            histmesa[i] = carta;
        }else{
            histjog[i - 1] = carta;
        }
        if(carta > 9){
        carta = 10;
        }
        if(carta == 1){
        carta = 11;
        as++;
        }
        if(i == 0){
            totalmesa += carta;
        }else{
            total += carta;
        }
        for(;total > 21 && as > 0;){
            total -= 10;
            as--;
        }   
        if(i == 0){
            printf(" -- Total de cartas = %d {", totalmesa);
            for(int z = 0; z < size; z++)
                show_hist_mesa(histmesa, z);
        }else{

            printf(" -- Total de cartas = %d {", total);
            for(int z = 0; z < size; z++)
                show_hist_jog(histjog, z); 
        }
        printf("}\n");  

        if(total > 21){
            puts("-------------- QUE PENA, VOCE PERDEU! :( -------------------");
            break;
        }
        if(i == 0){
            //Primeira carta da mesa.
        }else if(i < 2){
            //Duas primeiras cartas do jogador.
        }else{
            printf("Digite (1) para Pedir Carta ou digite (2) para Parar : ");
            scanf("%d", &stop);
            for(;stop < 1 || stop > 2 ;){
                printf("Digite (1) para Pedir Carta ou digite (2) para Parar : ");
                scanf("%d", &stop);
            }
        }
        if(stop == 2){
           size++; 
            break;
        }                      
    }
        for(int i = 0; total <= 21; i++){
            if(totalmesa > 21){
                puts("----------------PARABENS, VOCE VENCEU!!----------------");
                break;
            }else if(totalmesa == 21 || totalmesa >= total){
                puts("------------QUE PENA, VOCE PERDEU-------------- :(");
                break;
            }
            sizemesa++;
            printf("Mesa recebeu {");
            carta = rand() % 13 + 1;
            show_carta(carta);
            printf("}");
            histmesa[i + 1] = carta;
            if(carta > 9){
                carta = 10;
            }
            if(carta == 1){
                carta = 11;
                as++;
            }
            totalmesa += carta;
            printf(" -- Total de cartas = {%d}\n ", totalmesa);
    }
}       
