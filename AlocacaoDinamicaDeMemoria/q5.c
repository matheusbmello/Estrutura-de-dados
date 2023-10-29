#include <stdio.h>

int excluirElemento(float pvalores[], int pcapacidade, int *ptamanho, float pv) {
    int i, j, encontrado = 0;

    // Verificar se o vetor está vazio
    if (*ptamanho == 0) {
        return 0; // Falso, não há elementos para excluir
    }

    // Procurar pelo valor a ser excluído
    for (i = 0; i < *ptamanho; i++) {
        if (pvalores[i] == pv) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        // Movendo os elementos restantes para preencher o espaço vazio
        for (j = i; j < (*ptamanho - 1); j++) {
            pvalores[j] = pvalores[j + 1];
        }
        (*ptamanho)--;
        return 1; // Verdadeiro, a exclusão foi bem-sucedida
    } else {
        return 0; // Falso, o valor a ser excluído não foi encontrado
    }
}

int main() {
    float valores[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int capacidade = 5;
    int tamanho = 5;
    float valor_a_excluir = 3.0;

    if (excluirElemento(valores, capacidade, &tamanho, valor_a_excluir)) {
        printf("Exclusão bem-sucedida\n");
    } else {
        printf("Exclusão não realizada. Valor não encontrado.\n");
    }

    // Imprimir o vetor atualizado
    printf("Vetor atualizado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", valores[i]);
    }

    return 0;
}
