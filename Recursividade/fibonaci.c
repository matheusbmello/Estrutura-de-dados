#include <stdio.h>

int fibo(int n){
    if(n == 0)
        return 0;
    else if( n == 1)
        return 1;
    else{
        int fibonacci;
        fibonacci = fibo(n-1) + fibo(n-2);
        return fibonacci;
    }
}

int main(void){
    int n;
    printf("Digite o termo de Fibonacci a ser calculado: ");
    scanf("%d", &n);
    
    if(n < 0)
        printf("O número deve ser positivo ou zero");
    else{
        int resultado = fibo(n);
        printf("O termo é %d\n", resultado);
    }
    return 0;
}