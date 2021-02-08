#include <stdio.h>
int main(){
    
    char jog1 = ' ';
    char jog2 = ' ';
    int v1 = 0;
    int v2 = 0;
    int emp = 0;
    
    while((v1 < 3) && (v2 < 3)){
        
        do{
            puts("Jogador 1: Digite R para Rock, P para Paper e S para Scissor:");
            scanf(" %c", &jog1);
        }while((jog1 != 'r') && (jog1 != 'p') && (jog1 != 's'));
        
        do{
            puts("Jogador 2: Digite R para Rock, P para Paper e S para Scissor:");
            scanf(" %c", &jog2);    
        }while((jog2 != 'r') && (jog2 != 'p') && (jog2 != 's'));
        
    
        printf("Jogador 1 jogou {%c};\n", jog1);
        printf("Jogador 2 jogou {%c};\n", jog2);
        
        
        if(jog1 == jog2){
            puts("----------------  EMPATE  ----------------\n");
            emp++;
        }
        else if((jog1 == 'p' && jog2 == 'r') || (jog1 == 's' && jog2 == 'p') || (jog1 == 'r' && jog2 == 's')){
            puts("----------------  JOGADOR 1 VENCEU!  ----------------\n");
            v1++;
        }
        else{
            puts("----------------  JOGADOR 2 VENCEU!  ----------------\n");
            v2++;
        }
        
        printf("Jogador {1} venceu %d vezes!\n", v1);
        printf("Jogador {2} venceu %d vezes!\n", v2);
        printf("Houve empate %d vez(es)!\n", emp);
        
    }
    
    if(v1 > v2){
        printf("~~~~~~~~~~ JOGADOR 1 É O CAMPEÃO ~~~~~~~~~~\n");
    }
    else{
        printf("~~~~~~~~~~ JOGADOR 2 É O CAMPEÃO ~~~~~~~~~~\n");
    }

}