#include <stdio.h>
#include <math.h>
int main (){
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    scanf ("%f %f %f", &a, &b, &c);

    float p = ((a + b + c) / 2);
    float area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf ("%.2f\n", area);

}