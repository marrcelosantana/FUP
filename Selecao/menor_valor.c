//não finalizado, na verdade era pra fazer com laços!

#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a > b && b > c && c > d && d > e){
        printf("%d\n", e);
    }else if(a > b && b > c && c > d && e < d){
        printf("%d\n", d);
    }else if(a > b && b > c && c > d && e < c){
        printf("%d\n", c);
    }else if(a > b && c > b && d > b && e < b){
        printf("%d\n", b);
    }else{
        printf("%d\n", a);
    }
}