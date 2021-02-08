#include <stdio.h>
#include <string.h>

int main(){
    char letras[100];
    scanf("%s", letras);
    int size = strlen(letras);
    
    int soma = 0;
    int resto = 0;
    for(int i = 0; i < size; i++){
        soma += letras[i];
    }
    resto = soma % 50;
    printf("%i", resto);
}