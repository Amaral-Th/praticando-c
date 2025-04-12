#include <stdio.h>


main() {
	/*Mini Mundo: Leia um número e imprima todos os números ímpares até esse número.
	*/
	
	int numero_escolhido;
	
	printf("Escolha um número: ");
	scanf("%d", &numero_escolhido);
	
	for(int i = 0; i <= numero_escolhido; i++) {
		if(i % 2 != 0) {
			printf("\n%d", i);
		}
	}
	
}
	
