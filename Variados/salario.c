#include <stdio.h>
int main (){
    float salario = 0;
    float newsalario = 0;
    scanf ("%f", &salario);

    if(salario <= 1000){
        newsalario = salario + (salario * 0.2);
        printf("%.2f\n", newsalario);
    }else if(salario <= 1500){
        newsalario = salario + (salario * 0.15);
        printf("%.2f\n", newsalario);
    }else if(salario <= 2000){
        newsalario = salario + (salario * 0.1);
        printf("%.2f\n", newsalario);
    }else{
        newsalario = salario + (salario * 0.05);
        printf("%.2f\n", newsalario);
    }
}