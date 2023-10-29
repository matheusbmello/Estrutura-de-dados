#include <stdio.h>
#define Tam 100

int stringIgual(char *a, char *b){
    if(*a == '\0' && *b == '\0')
        return 1;

    if(*a != *b)
        return 0;

    
    return stringIgual(a + 1, b + 1);
    
}

int main(void){
    char a[Tam];
    char b[Tam];
    int resposta;

    printf("Digite a primeira string:\n");
    scanf("%s", a);

    printf("Digite a segunda string:\n");
    scanf("%s", b);

    resposta = stringIgual(a,b);

    if (resposta)
        printf("As strings a e b são iguais.\n");
    else
        printf("As strings a e b são diferentes.\n");

    return 0;
}