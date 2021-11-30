#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void omtrek(float *diameter);


int main()
{
    float diameter;
    float *ptr;
    printf("Geef de diameter van een circel: ");
    scanf("%f", &diameter);
    ptr = &diameter;
    omtrek(ptr);
    printf("%f\n", diameter);
    return 0;
}


void omtrek(float *diameter)
{
    *diameter = *diameter * M_PI;
}