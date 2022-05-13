#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
using  namespace std;

class Coordenada{
private:
float x;
float y;
public:
Coordenada(float a, float b){
x = a;
y = b;}

float rad(){
float r = r_valor();
float grau = y/r;
return (grau * 2)/ 360;}

float r_valor(){
return sqrt( pow(x,2)  + pow(y,2));
}
};


int main (){
float a,b;
printf("Digite o valor x do plano cartesiano: ");
scanf("%f",&a);printf("\n");
printf("Digite o valor y do plano cartesiano: ");
scanf("%f",&b);printf("\n");
Coordenada c(a,b);


return printf(" cordenadas polares: %2.2f, %fPIrad", c.r_valor(), c.rad());
}
