#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection(int vet[], int size){
    for(int i = 0; i < size; i++){
        int ind = i;
        for(int j = i; j < size; j++){
            if(vet[j] < vet[ind])
                ind = j;
        }
        int aux = vet [i];
        vet [i] = vet [ind];
        vet [ind] = aux;
    }
}
int main(){
    int size = 20;
    int vet[size];
    srand(time(NULL));

    for(int i = 0; i < size; i++)
        vet[i] = rand() % 100;
    selection(vet, size);

    for(int i = 0; i < size; i++)
        printf("%d ", vet[i]);
    puts("");
}