/*
 *  Created on: 08/12/2015
 *  Author: Fábio Gaspar
 */
#include <stdio.h>

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes);

int main()
{
    int v[100], N, x, posicoes[100], nPosicoes = 0, i, z;

    printf("Qual é o tamanho do vetor? ");
    scanf("%d", &N);
    printf("Insira uma série de números: ");
    for (i = 0; i < N - 1; i++) {
        printf("Insira o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("Que valor pretende procurar? ");
    scanf("%d", &x);
    procuraTodos(&v, N, x, &posicoes, &nPosicoes);
    printf("Foi encontrado o número %d vezes, nas posições ", nPosicoes);
    for (z = 0; posicoes[z] != 0; ++z) {
        printf("%d ", posicoes[z]);
    }
    return 0;
}

int procuraTodos(int *v, int N, int x, int *posicoes, int *nPosicoes) {
    int j;
    for (j = 0; j < N - 1; ++j) {
        if (x == v[j]) {
            posicoes[*nPosicoes] = j;
            nPosicoes++;
        }
    }
    if (nPosicoes > 0) return 1;
    else return 0;
}