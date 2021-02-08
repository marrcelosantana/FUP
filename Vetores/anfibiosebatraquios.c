#include <stdio.h>
#include <stdlib.h>

int conter(int contador, int size1){
    if(contador == size1)
        puts("sim");
    else
        puts("nao");
    return 0;
}

int main(){
    int size1 = 0;
    int size2 = 0;
    int contador = 0;

    scanf("%d", &size1);
    int vetX[size1];
    for(int i = 0; i < size1; i++){
        scanf("%d", &vetX[i]);
    }
    scanf("%d", &size2);
    int vetY[size2];
    for(int i = 0; i < size2; i++){
        scanf("%d", &vetY[i]);
    }
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(vetX[i] == vetY[j]){
                contador += 1;
                vetY[j] = 0;
            }
        }
    }
    conter(contador, size1);
}
