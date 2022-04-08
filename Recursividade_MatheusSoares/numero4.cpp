#include <stdio.h>

int mdc(int a, int b){
    if(b==0){
        return a;
    }else{
        return mdc(b, (a % b));
    }
}

int main(){
    int a,b;

    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);

    printf("Resultado do MDC: %d\n", mdc(a, b));

    return 0;
}