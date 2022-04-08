#include <stdio.h>

int numeroA, numeroB;
char a, b;

int potenciaA(void){
  if (numeroA==0){
     return 0;
    }
  numeroA--;
  printf("%c",a);
  potenciaA();
}

int potenciaB(void){
  if (numeroB==0){
    return 0;
  }
  numeroB--;
  printf("%c",b);
  potenciaB();
}

int expoente(void){
    potenciaA();
    potenciaB();
}

int main(void){
   
    printf("Digite o valor de a: ");
    scanf(" %c", &a);
    printf("Digite o valor de b: ");
    scanf(" %c", &b);
    printf("Digite a quantidade de repetições: ");
    scanf("%d",&numeroA);
    numeroB = numeroA;
    expoente();
}