#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 0;
    scanf("%d", &size);
    int vet[size];

    for(int i = 0; i< size; i++)
        scanf("%i", &vet[i]);
    
    for(int i = 0; i < size; i++){
        if(vet[0] == 0 && vet[1] == 0){
            printf("%d", vet[2]);
            break;
        }
        else if(vet[i -1] == 0 && vet[i] == 0 && vet[i +1]== 0){
            printf("0");
            break;
        }
        else
            printf("%d", vet[i]);
    }
    puts("");
}
