#include <stdio.h>
#include <stdlib.h>//rand e srand
#include <time.h> //time
#include <stdbool.h>

int rand_int_fechado(int menor, int maior){
    int num = rand() % (maior - menor + 1) + menor;
}


int main (){
    srand(time(NULL));
    int escolhido = rand_int_fechado(1, 99);
    puts("Escolhi o valor: ");
    bool acertou = false;

    int money = 100;

}