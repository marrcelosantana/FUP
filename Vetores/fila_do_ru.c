#include <stdio.h>
int main(){      
    int pessoas = 0;
        scanf("%d",&pessoas);
        int vet[pessoas];
            for (int i = 0; i < pessoas; i++){
        scanf("%d", &vet[i]);
            } 
        printf("[ ");
        for(int i = 0; i < pessoas; i++){
            if(vet[i] % 2 != 0){
                printf("%d ",vet[i]);
            }
    }printf("]\n"); 

        printf("[ ");
            for(int i = 0; i < pessoas; i++){
                if(vet[i] % 2 == 0){
                    printf("%d ",vet[i]);
                }
        }printf("]"); 
}
