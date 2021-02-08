#include <stdio.h> 
int main () {
    int cesta = 0;
    int banana = 0;
    int goiaba = 0;
    int manga = 0;
    int total = 0;
    int minutos = 0;
    scanf ("%d %d %d %d", &cesta, &banana, &goiaba, &manga);

    total = (banana + goiaba + manga);
    while(total>0){
        total = total - cesta;
        minutos++;
        printf("%d\n", minutos);
        
    }

}