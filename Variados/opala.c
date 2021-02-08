#include <stdio.h> 
int main () {
    float velo = 0;
    float tempo = 0;
    float cons = 0;
    float kmh = 0;
    float dist = 0;
    float desempenho = 0;
    scanf ("%f %f %f", &velo, &tempo, &cons);
    kmh = tempo / 60;
    dist = velo * kmh;
    desempenho = dist / cons;
    printf ("%.2f\n", desempenho);

}   
