#include <stdio.h>

int main(void)
{
    int change;

    do
    {
        printf("Change owed: ");
        scanf("%d", &change);
    }
    while (change < 0);

    // Inicializado como 0 para ir aumentando de 1 em 1
    int coins = 0;

    // Conta a quantidade de moedas de 25 cents necessárias
    while (change >= 25)
    {
        change = change - 25;
        coins++;
        // Conta a quantidade de moedas de 10 cents necessárias
    }
    while (change >= 10)
    {
        change = change - 10;
        coins++;
        // Conta a quantidade de moedas de 5 cents necessárias
    }
    while (change >= 5)
    {
        change = change - 5;
        coins++;
        // Conta a quantidade de moedas de 1 cents necessárias
    }
    while (change >= 1)
    {
        change = change - 1;
        coins++;
    }
    printf("%d\n", coins);
}