
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float x,z,y;
    scanf("%f",&x);
    y=(x+5)/(2*(x+1));
    z=((y*y)+x*(x-2*y))/(x*y);
    printf("%f",z);
    return 0;
}

