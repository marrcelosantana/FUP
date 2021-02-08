#include <stdio.h>
int main(){
    char opjog1 = 0;
    int jog1 = 0;
    int jog2 = 0;
    scanf(" %c %d %d", &opjog1, &jog1, &jog2);
    int soma = jog1 + jog2;

    if(opjog1 == 'p' && soma % 2 == 0){
        puts("Venceu");
    }else if(opjog1 == 'i' && soma % 2 != 0){
        puts("Venceu");
    }else{
        puts("Perdeu");
    }

}