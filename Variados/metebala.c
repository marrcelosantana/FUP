#include <stdio.h>
#include <math.h>
int main (){
    float x1 = 0.0;
    float y1 = 0.0;
    float x2 = 0.0;
    float y2 = 0.0;
    scanf ("%f %f %f %f", &x1, &y1, &x2, &y2);

    float dist = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

    printf("%.2f\n", dist);





}