#include <stdio.h>
int main(){
    int size = 0;
    scanf("%d\n ", &size);
    double vet[size];
    double cont = 0;
    for(int i = 0; i < size; i++){
        scanf("%lf", &vet[i]);
    }
    for(int i = 0; i < size; i++){
        cont += vet[i];
    }
    double media = cont / size;
    printf("%.2f\n", media);

    for(int i = 0; i < size; i++){
        if(vet[i]  == media )
            printf("M ");
        else if(vet[i] > media)
            printf("G ");
        else if(vet[i]<media)
            printf("P ");
    }
}