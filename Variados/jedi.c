#include <stdio.h>
int main (){
    int size = 0;
    int somajedi = 0;
    int somasith = 0;                                      
    scanf ("%d", &size);
    for(int i = 0; i < size/2; i++){
        int valor = 0;
        scanf("%d", &valor);
        somajedi = somajedi + valor;
    }
    for(int i = 0; i < size/2; i++){
        int valor = 0;
        scanf("%d", &valor);
        somasith = somasith + valor;
    }
    if(somajedi == somasith)
        printf("Empate");
    else if(somajedi > somasith)
        printf("Jedi");
    else
        printf("Sith");
    
}