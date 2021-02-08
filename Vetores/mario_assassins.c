#include <stdio.h>
int main(){
    int size = 0;
    scanf("%d ", &size);
    int vet[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }
    int cont = 0;
    for(int i = 0; i < size; i++){
        int value = vet[i] - vet[i + 1];
        if((i + 1) < size){
            if(value > 1 || value < -1){
                cont++;
            }
        }
    }printf ("%d", cont);
}