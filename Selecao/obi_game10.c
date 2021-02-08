#include <stdio.h>
int main(){
    int size = 0;
    int inicial = 0;
    int final = 0;
    int passos = 0;
    scanf("%d %d %d %d", &size, &inicial, &final, &passos);

    passos = final - inicial;
    if(passos < 0)
        passos += size;
        printf("%d\n", passos);
    

}