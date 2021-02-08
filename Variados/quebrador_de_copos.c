#include <stdio.h>

void linha(int n_pontos, int n_elem, int elem){
    for(int i = 0; i < n_pontos; i++)
        printf(".");
    for(int i = 0; i < n_elem; i++){
        printf("%d", elem);
        if(i != n_elem - 1)
            printf(".");
    }
    for(int i = 0; i < n_pontos; i++)
        printf(".");
    puts("");
}


int main(){
    int num = 0;
    scanf("%d", &num);
    for(int i = num - 1; i >= 0; i--)
        linha(i, num - i, num);
}