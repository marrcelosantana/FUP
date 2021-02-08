#include <stdio.h>
int main(){
    int valor = 0;
    int menor = 31;
    int i = 0;
    scanf("%d %d", &valor, &menor);

    for(i = 0; i < 5; i++){
        scanf("%d", valor);
        if(valor < menor)
            menor = valor;

    }
    printf("%d", menor);
}