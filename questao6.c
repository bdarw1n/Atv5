#include <stdio.h>
#include<stdlib.h>
///struct:
typedef struct aluno{
float n1;
float n2;
float m;
char nome[101];
char disciplina_codigo[21];
}Al;
Al* iniciar(Al** al);
void inserir(Al** al);
void print (Al** al);
///Função main:
int main (){
Al* al[10];
iniciar(al);
inserir(al);
printf("\n\n");
print (al);
return 0;
}
///Iniciar:
Al* iniciar(Al **al){
 for (int i = 0; i < 10; i++){al[i]= NULL;}
}
///Inserir:
void inserir (Al **al){
int  cnt = 1;
 for(int i = 0; i < 10; i++){
   al[i] = (Al*)malloc(sizeof(Al));
   printf("coloque os dados do %dº aluno:\n", cnt);
   printf("Nome: ");scanf("%s", al[i]-> nome);printf("\n");
   printf("Código da disciplina: ");scanf("%s", al[i]-> disciplina_codigo);printf("\n");
   printf("nota 1: ");scanf("%f", &al[i]-> n1);printf("\n");
   printf("nota 2: ");scanf("%f", &al[i]-> n2);printf("\n");
   al[i]->m = (  1 * al[i]-> n1 +  2 * al[i]->n2)/2;
   cnt++;
}
}
///Imprimir os resultados:
void print (Al ** al){
 for (int i = 0; i < 5; i++){
    printf("%s\n", al[i]-> nome);
    printf("%s\n", al[i]-> disciplina_codigo);
    printf("Média: %2.2f", al[i]-> m);
  printf("\n\n");
 }
}


