#include <stdio.h>
int main(){
    int size = 0;
    scanf("%d", &size);
    int t = 0;
    char pe = '0';
    int size_Esq = 0;
    int size_Dir = 0;
    int E[size];
    int D[size];
    for(int i = 0;i < size; i++){
        scanf("%d %c", &t, &pe);
        if(pe == 'E'){
            E[size_Esq] = t;
            size_Esq++;
        }
        if(pe == 'D'){
            D[size_Dir] = t;
            size_Dir++;
        }
    }
    int aux = 0;
    for(int i = 0; i < size_Esq; i++){
        for(int j = 0; j < size_Dir; j++){
            if(E[i] == D[j]){
                aux++;
                D[j] = -1;
                E[i] = 0;
                break;
            }
        }
    }
    printf("%d", aux);
    return 0;
}