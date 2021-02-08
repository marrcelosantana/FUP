#include <stdio.h>

float ordenaretirarmediana(int tam, float vet[]){
    float aux = 0;
    for(int i = 0; i < tam; i++){
        int menor = i;
        for(int j = i; j < tam; j++)
            if(vet[j] < vet[menor])
                menor = j;
        aux = vet[i];
        vet[i] = vet[menor];
        vet[menor] = aux;
    }
    
    float mediana = 0;
    if(tam % 2 != 0)
        mediana = vet[tam / 2];
    else
        mediana = (vet[tam / 2 - 1] + vet[tam / 2]) / 2;
    
    return mediana;
}

int main(){
    int tam = 0;
    scanf("%i", &tam);
    float vet[tam];

    for(int i = 0;i < tam; i++)
        vet[i] = 0;

    for(int i = 0; i < tam; i++)
        scanf("%f", &vet[i]);
    
    float result = ordenaretirarmediana(tam, vet);
    printf("%.1f\n", result);
}