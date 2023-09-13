#include <stdio.h>
#include <math.h>

int main() {
    int X = 5;
    int Y = 7;
    int Z = 10;
   
    int suma = X + Y + Z;

   
    int multiplication = X * Y * Z;

   
    double geometric = cbrt(fabs(X) * fabs(Y) * fabs(Z));

   
    printf("avg sum: %d\n", suma);
    printf("avg multiplication %d\n", multiplication);
    printf("avg geometric: %lf\n", geometric);

    return 0;
}