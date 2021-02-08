#include <stdio.h>
int main () {
    int jog1;
    int jog2;
    scanf ("%d %d" , &jog1 , &jog2);
    char R;
    char P;
    char S;

    if (jog1 == jog2) {
    puts ("empate");
    } 
    else if (((jog1 == R && jog2 == S) || ((jog1 == P && jog2 == R)) || ((jog1 == S && jog2 == P)))) {
    puts ("jog1");
    } 
    else 
    puts ("jog2");
    
}