#include <stdio.h>
int main(){ 
    int c = 0;
    int a = 0;
    int viagens = 0;
    
    scanf("%i", &c);
    scanf("%i", &a);
    
    2 <= c <= 100;
    1 <= a <= 1000;
    
    viagens = ( a / c) + 1;
    printf("%i\n", viagens);
}