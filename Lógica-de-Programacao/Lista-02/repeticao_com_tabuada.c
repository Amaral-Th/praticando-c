#include <stdio.h>

main() {
	/*
	Leia um número e imprima a tabuada de multiplicação desse número.

	*/
	int numero_escolhido;
	int multiplicacao;
	
	printf("Escolha um numero para a tabuada ser colocada: ");
	scanf("%d",&numero_escolhido);
	
	for(int i = 0 ; i <= 10 ; i++) {
		multiplicacao = numero_escolhido * i;
		printf("\n%d", multiplicacao); 		
	}

	
	return 0;
}

