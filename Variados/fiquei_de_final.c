#include <stdio.h>
int main(){
    int nota1 = 0;
    int nota2 = 0;
    int notafinal = 0;
    scanf("%d %d", &nota1, &nota2);
    int media = (nota1 + nota2) / 2;
    int mediafinal = 0;

    if(media >= 7){
        puts("aprovado");
    }else if(media < 4){
        puts("reprovado");
    }else if(media > 4 && media < 7){
        scanf("%d", &notafinal);
        mediafinal = (notafinal + media) / 2;
        if(mediafinal >= 5){
        puts("aprovado na final");
        }else{
        puts("reprovado na final");
        }
    }
}