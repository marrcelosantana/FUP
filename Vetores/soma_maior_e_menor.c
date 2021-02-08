#include <stdio.h>

int somar(int maior, int menor){
    int result = maior + menor;
    return(result);
}

int main(){
    int vet[5];
    int maior = 0;
    int menor = 0;
    int pmaior = 0;
    int pmenor = 0;
    int result = 0;
    int i = 0;

    for(i = 0; i <= 5; i++){
        scanf("%d", &vet[i]);
    }
    
    maior = vet[0];
    pmaior = 0;
    for(i = 1; i < 5; i++){
        if(vet[i] > maior){
            maior = vet[i];
            pmaior = i;
        }
    }

    menor = vet[0];
    pmenor = 0;
    for(i = 1; i < 5; i++){
        if(vet[i] < menor){
            menor = vet[i];
            pmenor = i;
        }
    }

    result = somar(maior, menor);
    printf("%d", result);
}