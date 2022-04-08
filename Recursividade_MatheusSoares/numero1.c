#include <stdio.h>

int potencia(int x, int y){
  if(y==0){
    return 1;
  }
  else{
    return x * potencia(x,y-1);
  }
  
}
int main() {
  int x, y;
  printf("Digite aqui o valor da sua base: ");
  scanf("%d",&x);
   printf("Digite aqui o valor da sua potência: ");
  scanf("%d",&y);
  
  printf("O resultado de %d elevado à %d é: %d", x, y,potencia(x,y));
  
  return 0;
}
