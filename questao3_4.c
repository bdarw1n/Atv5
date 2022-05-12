#include <stdio.h>
#include<stdlib.h>
///struct:
typedef struct aluno{
float n1;
float n2;
float n3;
float m;
char nome[101];
char curso[21];
}Al;
///Cabeçalhos:
Al* iniciar(Al **al);
void inserir(Al **al);
Al* maior_nota(Al **al);
void print (Al** al);
Al* menor_media(Al **al);
Al* maior_media(Al **al);

///Função main:
int main (){
Al* al[5];
iniciar(al);
inserir(al);
Al* maior = maior_nota(al);
printf("\n\n");
print (al);
printf("\n\n");
printf("Aluno com a maior nota na primeira prova: %s %2.2f", maior->nome, maior -> n1);
printf("\n\n");
Al* maior_m = maior_media(al);
printf("Aluno com a maior média geral: %s %2.2f", maior->nome, maior -> m);
printf("\n\n");
Al* menor_m = menor_media(al);
printf("Aluno com a menor média geral: %s %2.2f", maior->nome, maior -> m);
return 0;
}
///Iniciar:
Al* iniciar(Al **al){
 for (int i = 0; i < 5; i++){al[i]= NULL;}
}
///Inserir:
void inserir (Al **al){
int  cnt = 1;
 for(int i = 0; i < 5; i++){
   al[i] = (Al*)malloc(sizeof(Al));
   printf("coloque os dados do %dº aluno:\n", cnt);
   printf("Nome: ");scanf("%s", al[i]-> nome);printf("\n");
   printf("curso: ");scanf("%s", al[i]-> curso);printf("\n");
   printf("nota 1: ");scanf("%f", &al[i]-> n1);printf("\n");
   printf("nota 2: ");scanf("%f", &al[i]-> n2);printf("\n");
   printf("nota 2: ");scanf("%f", &al[i]-> n3);printf("\n");
   al[i]->m = (al[i]-> n1 + al[i]->n2 + al[i] -> n3)/3;
   cnt++;
}
}
///encontrar maior nota primeira prova:
Al* maior_nota(Al **al){
 float maior = al[0] -> n1;
 int j;
 for(int i = 0; i < 5; i++){
    if(al[i] -> n1 > maior){
        maior = al[i] -> n1;
        j=i;
    }
 }
return al[j];
}
///Imprimir os resultados:
void print (Al ** al){
 for (int i = 0; i < 5; i++){
    printf("%s\n", al[i]-> nome);
    printf("%s\n", al[i]-> curso);
    if(al[i]-> m < 6){
        printf("%2.2f (reprovado)",al[i]-> m);
    }else {
       printf("%2.2f (aprovado)",al[i]-> m);
    }
  printf("\n\n");
 }
}
///Encontrar a maior média geral:
Al* maior_media(Al **al){
 float maior = al[0] -> m;
 int j;
 for(int i = 0; i < 5; i++){
    if(al[i] -> m > maior){
        maior = al[i] -> m;
        j=i;
    }
 }
return al[j];
}
///Encontrar a menor média geral:
Al* menor_media(Al **al){
 float menor = al[0] -> m;
 int j;
 for(int i = 0; i < 5; i++){
    if(al[i] -> m < menor){
        menor = al[i] -> m;
        j=i;
    }
 }
return al[j];
}
