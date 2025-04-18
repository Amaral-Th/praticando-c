#include <stdio.h>

int main() {
  int numero;
  long long fatorial = 1; 

  printf("Digite um número: ");
  scanf("%d", &numero);

  for (int i = 1; i <= numero; ++i) {
    fatorial *= i;
  }

  printf("O fatorial é: %lld\n", fatorial); 
  return 0;
}

