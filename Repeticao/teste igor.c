#include <stdio.h>
int main (){
    
    int n, a, maior, menor;
    
    scanf ("%d", &n);
    scanf ("%d", &a);
    maior = a;
    menor = a;
    
    for(int i = 1; i < n; i++){
        scanf ("%d", &a);
        
        if (a > maior){
            maior = a;
        
        }else if (a < menor){
            menor = a;
        }
    
    }
    
    printf ("%d %d", maior, menor);
    
 return (0);   
}