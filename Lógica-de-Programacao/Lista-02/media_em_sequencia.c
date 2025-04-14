#include <stdio.h>

int main() {
   
   /* Mini Mundo: Leia uma sequência de números e imprima a média deles. */

   
    int qntd_notas;
    float notas_tiradas, media;
    int soma = 0;
    
    printf("Quantas notas teras? \n");
    scanf("%d", &qntd_notas);
    
    for(int i = 1 ; i <= qntd_notas ; i++) {
    	printf("Insira %iº nota: ",i);
    	scanf("%f", &notas_tiradas);
    	soma += notas_tiradas;
	}
    media = float(soma) / qntd_notas;
    printf("Nota média é: %f",media);
   
}

