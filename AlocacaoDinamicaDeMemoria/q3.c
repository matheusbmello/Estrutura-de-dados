#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IncluiCaracter(char *pvetcar, int *ptammax, int *pqtde, char ch){
    *ptammax = *ptammax + 1;
    char *pvetcar2 = (char *)malloc(*ptammax * sizeof(char));
    strcpy(pvetcar2, pvetcar);
    pvetcar2[*pqtde] = ch;
    *pqtde = *pqtde + 1;
    printf("%s\n", pvetcar2);
    free(pvetcar2);
}