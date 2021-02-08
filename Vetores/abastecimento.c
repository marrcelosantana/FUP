#include <stdio.h>
int main(){
    int casas = 0;
    int caminhao = 0;
    scanf("%d %d", &casas, &caminhao);
    int vet[casas];
    for(int i = 0; i < casas; i++){
        vet[i] = 0;
    }
    int x = 0;
    int y = 0;
    int agua = 0;
    for(int i = 0; i< caminhao;i++){
        scanf("%d %d %d", &x, &y, &agua);
        for(int i = x; i <= y; i++){
            vet[i]+=agua;
        }
    }for(int i = 0; i < casas; i++)
        printf("%d ", vet[i]);

}