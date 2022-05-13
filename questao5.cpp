#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class V{
public:
float x;
float y;
float z;
V (float a, float b, float c){
x = a;
y = b;
z = c;
}
};


int main (){
printf("soma de vetores num plano tridimensional.");
printf("\n\n");
float a,b,c;
printf("Digite os valores do primeiro vetor:\n");
printf("A: ");scanf("%f", &a);printf("\n");
printf("B: ");scanf("%f", &b);printf("\n");
printf("C: ");scanf("%f", &c);printf("\n");
V v1(a,b,c);
printf("Digite os valores do segundo vetor:\n");
printf("A: ");scanf("%f", &a);printf("\n");
printf("B: ");scanf("%f", &b);printf("\n");
printf("C: ");scanf("%f", &c);printf("\n");
V v2(a,b,c);
a = v1.x + v2.x;
b = v1.y + v2.y;
c = v1.z + v2.z;
V vr(a,b,c);
return printf("O vetor resultante desta soma é: vr(%2.2f, %2.2f, %2.2f)", vr.x, vr.y, vr.z);
}


