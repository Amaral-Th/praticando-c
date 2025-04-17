#include <stdio.h>

int main() {
    /*Mini Mundo: Leia um número e imprima a sequência de Fibonacci até esse número. */

    int numero;
    int primeiro = 0;
    int segundo = 1;
    int prox_numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    printf("%d %d ", primeiro, segundo); // Print inicial dos dois primeiros

    while(segundo < numero) {
        prox_numero = primeiro + segundo;

        if(prox_numero <= numero) {
            printf("%d ", prox_numero);
            primeiro = segundo;
            segundo = prox_numero;
        } else {
            break;
        };
    }
    printf("\n");
    return 0;
}
