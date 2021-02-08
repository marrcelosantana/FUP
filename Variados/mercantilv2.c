#include <stdio.h>
int main(){
    float jog1 = 0.0;
    char jog2 = 0;
    float valor = 0.0;
    scanf("%f  %c %f", &jog1, &jog2, &valor);

    if(jog1 == valor){
        puts("primeiro");
    }else if((valor > jog1 && jog2 == 'M') || (valor < jog1 && jog2 == 'm')){
        puts("segundo");
    }else{
        puts("primeiro");
    }

}