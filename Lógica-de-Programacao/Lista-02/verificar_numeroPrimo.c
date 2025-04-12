#include <stdio.h>
#include <stdbool.h> 
#include <math.h>   

int main() {
    /* Leia um número e imprima se ele é primo ou não. */

    int numero;
	bool eres_primo = true;

    printf("Escolha um numero: ");
    scanf("%d", &numero);

	if(numero <= 1)
	{
		eres_primo = false;
	}
	else
	{
		printf("A raiz quadrada de %d eh aproximadamente: %.2f\n", numero, sqrt(numero));
        printf("O loop ira verificar divisores de 2 ate %d (ou ate que o quadrado seja maior que %d):\n", (int)sqrt(numero), numero);
		for(int i = 2 ; i * i <= numero ; i++) {
			printf("Testando divisor: %d, Resto da divisão: %d\n", i, numero % i);
			if(numero % i == 0) 
			{
				eres_primo = false;
			}
		}
	};
	
	if(eres_primo) 
	{
		printf("Eres primo ");	
	}
	
	else 
	{
		printf("n eres");
	};
    return 0;
    
}
