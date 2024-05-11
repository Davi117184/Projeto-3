#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int soma = 0, valor = 0;
    do {
        system("clear");
        printf("\n Digite um valor diferente de 0: ");
        scanf("%i", &valor);
        if (valor % 2 == 0) {
            soma += valor; // soma = soma + valor;
        }
    } while (valor != 0);

    printf("\n A soma dos numeros pares e: %i", soma);

    return 0;
}
