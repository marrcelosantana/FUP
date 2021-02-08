#include <stdio.h>
int main(){
    int p = 0;
    int s = 0;
    int e = 0;
    int sapinho = 0;
    scanf("%d %d %d", &p, &s, &e);

    while(sapinho < p){
        printf("%d ", sapinho);
        sapinho += s;
        if(sapinho < p){
            printf("%d\n", sapinho);
            sapinho -= e;
            if(sapinho < 0){
                printf("%d ", sapinho);
                break;
            }
        if(s > 0){
            s -= 10;
        }    

        }

    }
    if(sapinho >= p){
        printf("saiu");
    }else{
        printf("morreu");
    }
}