#include <stdio.h>

#define N 2

int main(){
    float a, b, c, d, e, f, g, h;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    e = (a*a+b*c);
    f = (b*a+b*d);
    g = (c*a+c*d);
    h = (c*b+d*d);
    printf("%.3f %.3f\n%.3f %.3f\n", e, f, g, h); 
    return 0;
}