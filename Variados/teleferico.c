#include <stdio.h>

int main(){
    
    int A = 0;
    int C = 0;
    int vg = 0;
    
    scanf("%i", &C);
    scanf("%i", &A);
    
    2 <= C <= 100;
    1 <= A <= 1000;
    
    vg = ( A / C)+1;
    printf("%i", vg);
}