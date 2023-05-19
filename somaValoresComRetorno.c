/*
ALUNO: KAMILLY AMANCIO BATISTA
MATRICULA: 2022020570397
*/

#include <stdio.h>

int somarValores() {
    int i, soma = 0;
    for (i = 1; i <= 10; i++) {
        soma += i;
    }
    return soma;
}

int main(void) {
    int resultado = somarValores();
    printf("A soma dos valores de 1 ateh 10 eh: %d\n", resultado);
    return 0;
}

