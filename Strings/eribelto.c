#include <stdio.h>
#include <string.h>

int main(){
    
    char let[100];
    scanf(" %s",let);
    int size = strlen(let);
    int soma =0;
    int i;
    for(i = 0; i < size; i++){
        soma = soma + let[i];
    }
    int resto;
    resto = soma % 50;
    printf("%d",resto);
}