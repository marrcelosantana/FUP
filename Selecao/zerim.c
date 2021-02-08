#include <stdio.h>
int main (){
    int jog1 = 0;
    int jog2 = 0;
    int jog3 = 0;
    int jog4 = 0;
    scanf("%d %d %d %d", &jog1, &jog2, &jog3, &jog4);
    int soma = jog1 + jog2 + jog3 + jog4;
    if(soma == 0){
        puts("nenhum");
    }else{
        int winner = (soma - 1) % 4 + 1;
        printf("jog%d\n", winner);
    }

} 