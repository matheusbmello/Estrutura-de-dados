#include <stdio.h>

int produtoPorSoma(int a, int b){
    if(b == 0)
        return 0;
    if(b == 1)
        return a;
    return a + produtoPorSoma(a, b - 1);
}

int main(void){
    int a, b;
    printf("Digite o primeiro número a ser multiplicado\n");
    scanf("%d", &a);
    printf("Digite o segundo número a ser multiplicado\n");
    scanf("%d", &b);

    int resultado = produtoPorSoma(a, b);
    printf("O resultado é: %d\n", resultado);
    return 0;
}