#include <stdio.h>
 
int main() {
    double a, b, MEDIA = 0;
    scanf("%lf %lf", &a, &b);
    
    MEDIA = (a*3.5 + b*7.5) / 11.0;
    
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}
