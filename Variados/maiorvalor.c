#include <stdio.h>
int main(){
	int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    scanf ("%d %d %d %d", &v1, &v2, &v3, &v4);

    if(v1 < v2 && v2 < v3 && v3 < v4){
        printf("%d\n", v4);
    }else if(v1 < v2 && v2 < v3 && v4 < v3){
        printf("%d\n", v3);
    }else if(v1 < v2 && v3 < v2 && v4 < v2){
        printf("%d\n", v2);
    }else{
        printf("%d\n", v1);
    }
}