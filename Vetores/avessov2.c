#include <stdio.h>

int main(){
    int size = 0;
    int chosen = 0;
    scanf("%d %d", &size, &chosen);

    int vet[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }
    int choose[chosen];
    for(int i = 0; i < chosen; i++){
        scanf("%d", &choose[i]);
    }

    for(int i = 0; i < chosen; i++){
        for(int j = 0; j < size; j++){
            if((vet[j] == choose[i] || vet[j] == (choose[i]) * -1)){
                vet[j - 1] = vet[j - 1] * -1;
                vet[j + 1] = vet[j + 1] * -1;
            }
        }
    }
    for(int j = 0; j < size; j++){
        if(j == size -1){
            printf("%d", vet[j]);
            break;
        }    
        printf("%d", vet[j]);    
    }
}