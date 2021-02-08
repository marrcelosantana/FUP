#include <stdio.h>
#include <string.h>

int main(){
    char vetletras[100];
    scanf("%[^\n]", vetletras);
    int tamanho = 0;
    tamanho = strlen(vetletras);

    for(int i = tamanho - 1; i >= 0; i--)
        printf("%c", vetletras[i]);
}