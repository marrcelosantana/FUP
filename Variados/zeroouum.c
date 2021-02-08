#include <stdio.h>
int main (){
    int jog1 = 0;
    int jog2 = 0;
    int jog3 = 0;
    scanf ("%d %d %d", &jog1, &jog2, &jog3);

    if(jog1 == jog2 && jog2 == jog3 && jog1 == jog3){
        puts("empate");
    }else if(jog1 != jog2 && jog2 == jog3){
        puts("jog1");
    }else if(jog2 != jog1 && jog1 == jog3)
        puts("jog2");
    }else{
        puts("jog3");
    }    
    

}