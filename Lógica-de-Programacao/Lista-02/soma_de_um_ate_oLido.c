#include <stdio.h>

main() {
	
	
	/* Mini Mundo: Leia um número e imprima a soma de todos os números de 1 até esse número. */
	
	int numero_escolhido;
	int soma_numeros;
	
	printf("Escolha um numero: ");
	scanf("%d", &numero_escolhido);
	
	for(int i = 1 ; i <= numero_escolhido ; i++) {
	soma_numeros = soma_numeros + i;
	printf("\ni: %d", i);
	printf("\nsoma: %d", soma_numeros);
	
	}
	
}
