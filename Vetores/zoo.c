#include <stdio.h>
int main(){
    int size =0;
    scanf("%d ", &size);
    int vet[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int cont5 = 0;
    int cont6 = 0;
    int cont7 = 0;
    int cont8 = 0;
    int cont9 = 0;

    for(int i = 0; i < size; i++){
        if (vet[i] == 1 && cont1 == 0)
            cont1++;
        if (vet[i] == 2 && cont2 == 0)
            cont2++;
        if (vet[i] == 3 && cont3 == 0)
            cont3++;
        if (vet[i] == 4 && cont4 == 0)
            cont4++;
        if (vet[i] == 5 && cont5 == 0)
            cont5++;
        if (vet[i] == 6 && cont6 == 0)
            cont6++;
        if (vet[i] == 7 && cont7 == 0)
            cont7++;
        if (vet[i] == 8 && cont8 == 0)
            cont8++;
        if (vet[i] == 9 && cont9 == 0)
            cont9++; 
        }
        int soma = cont1 + cont2 + cont3 + cont4 + cont5 + cont6 + cont7 + cont8 + cont9;
        printf("%d", soma);
} 
