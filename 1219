#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897
 
int main() {
 double a, b, c; 
 
 while(scanf("%lf %lf %lf", &a, &b, &c)==3){
     double s = (a + b + c) / 2.0;
     double area_triangulo = sqrt(s*(s - a)*(s - b)*(s - c));
     double R = (a * b * c) / (4.0 * area_triangulo);
     double r = area_triangulo / s;
     
     double area_circulo = PI * R * R;
     double area_incircle = PI * r * r;
     
     double sunflowers = area_circulo - area_triangulo;
     double violets = area_triangulo - area_incircle;
     double roses = area_incircle;
     
     printf("%.4lf %.4lf %.4lf\n", sunflowers, violets, roses);
 }
  
    return 0;
}
