#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool vogal(char letra){
    char vogais[] = "aeiouAEIOU";
    int tam = strlen(vogais);
    for(int i = 0; i < tam; i++)
        if(vogais[i] == letra)
            return true;
    return false;
}

bool consoante(char letra){
    return isalpha(letra) && !vogal(letra);
}

int main(){
    char frase[100];
    fgets(frase, 100, stdin);
    int size = 0;
    size = strlen(frase);
    
    for(int i = 0; i < size; i++)
        if(vogal(frase[i]) && (frase[i] != ' '))
            printf("%c", frase[i]);
            
    puts("");

    for(int i = 0; i < size; i++)
        if(consoante(frase[i]) && (frase[i] != ' '))
            printf("%c", frase[i]);
}