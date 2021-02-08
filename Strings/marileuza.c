#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    char letra = '0';

    scanf("%[^\n]", frase);
    getchar();
    scanf("%c", &letra);
    int size = 0;
    size = strlen(frase);
    int contador = 0;
    for(int i = 0; i < size; i++){
        if(frase[i] == letra)
            contador++;   
    }
    printf("%i", contador);
}