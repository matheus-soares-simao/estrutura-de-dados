#include <stdio.h>

int fibonacci(int n){
    if (n < 1){
        printf("Numero de termos invalido\n");
        return -1;
    }
    else if (n == 1 || n == 2){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int numeroDeTermos, contador;

    printf("Digite quantos termos da sequencia de Fibonacci voce quer: ");
    scanf("%d", &numeroDeTermos);

    printf("Resultado: %d\n", fibonacci(numeroDeTermos));
    for(contador=1;contador<=numeroDeTermos;contador++){
        printf("%d\n", fibonacci(contador));
    }

    return 0;
}