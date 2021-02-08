#include <stdio.h>
int main (){
    int a = 0;
    int b = 0;
    int res = 0;
    char operador;
    scanf ("%d %d", &a, &b);
    scanf (" %c", &operador);

    if(operador == '+'){
        res = a + b;
        printf("%d\n", res);
    }else if(operador == '-'){
        res = a - b;
        printf("%d\n", res);
    }else if(operador == '*'){
        res = a * b;
        printf("%d\n", res);
    }else if(operador == '/') && (b == 0){
        printf("invalida\n");

    }else{
        res = a / b;
        printf("%d\n", res);
        
    }
    return 0;

}