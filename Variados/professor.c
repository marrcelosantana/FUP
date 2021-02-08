#include <stdio.h>
int main(){
    float n1 = 0.0;
    float n2 = 0.0;
    float n3 = 0.0;
    float nt = 0.0;
    float media = 0.0;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &nt);
    
    if(n1 < n2 && n1 < n3){
        media = (n2 + n3 + nt)/3;
    }else if(n2 < n1 && n2 < n3){
        media = (n1 + n3 + nt)/3;
    }else {
        media = (n1 + n2 + nt)/3;
    }
    if(media >= 7){
        printf("Aprovado com %.1f\n", media);
    }else {
        printf("Final com %.1f\n", media);
    }
}