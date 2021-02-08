#include <stdio.h>
int main(){
    int n1 = 0;
    int n2 = 0;
    scanf("%d %d", &n1, &n2);
    float div = n1 / n2;
    int resto = n1 % n2;
    

    if(resto == 0){
        printf("%0.f\n", div);
        printf("%d\n", resto);
        printf("%.2f\n", div);
    }else{
        float div = (float) n1 / (float) n2;
        printf("%0.f\n", div);
        printf("%d\n", resto);
        printf("%.2f\n", div);
    }
}