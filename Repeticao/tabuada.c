#include <stdio.h>
int main (){
    int a = 0;
    int b = 0;
    scanf ("%d %d", &a, &b);
    int a1 = a;
    int b1 = b;
    int i = a1;

    while(i < b1){
        a++;
        b--;
        printf("%d %d ", a, b);
        i += 1;
    }
}