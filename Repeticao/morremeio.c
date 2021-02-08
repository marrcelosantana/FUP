#include <stdio.h>
int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    
    scanf("%d %d %d", &A, &B, &C);
    
        if((A > B && B > C) || (C > B && B > A )){
            printf("%d", B);
        }else if((B > A && A > C) || (C > A && A > B)){
            printf("%d", A);
        }else if((A > C && C > B) || (C > A && B > C)){
            printf("%d", C);
        }
    
}