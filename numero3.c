#include <stdio.h>
#include <string.h>

char inverter( char palavra[], int n){
  int contador;
  
  if(n==1){
    return palavra[0];
  }
  else if(n>1){
    for(contador=0;contador<n;n--){
      printf("%c",palavra[n-1]);
    }
  }
}
int main(){
  int tamanhoPalavra;
  char  palavra[500];

  printf("Digite aqui a sua palavra que deseja inverter: ");
  scanf(" %[^\n]s", palavra);
  tamanhoPalavra = strlen(palavra);
  inverter(palavra,tamanhoPalavra);
}