#include <stdio.h>

int main(){
    int size = 0;
    scanf("%d", &size);
    int vet[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }
    int contador = 0; 
    if((vet[size - 1] == 0) && (vet[size - 2] == 0))
        contador++;
    for(int i = 0; i < size - 1; i++){
        if(vet[i] != 1)
            if((vet[i + 1] != 1) && (vet[i - 1] != 1))
                contador++;
    }

    printf("%d", contador);

}