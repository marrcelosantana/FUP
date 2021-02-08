#include <stdio.h> 
int main () {
    int hora = 0;
    int minuto = 0;
    int dia = 0;
    int mes = 0;
    int ano = 0;
    scanf ("%d %d %d %d %d", &hora, &minuto, &dia, &mes, &ano);
    int horario = hora % 12;
    int data = ano % 100;
    printf ("%02d:%02d %02d/%02d/%02d\n", horario, minuto, dia, mes, data);
}