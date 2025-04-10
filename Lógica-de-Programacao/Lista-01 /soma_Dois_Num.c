#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//Escreva um programa em C que solicite ao usuário dois números inteiros, some-os e exiba o resultado.
	
	int primeiroNumero, segundoNumero, soma;
	
	cout<<("Diga o primeiro número: ");
	cin>>(primeiroNumero);
	
	cout<<("Diga o segundo número: ");
	cin>>(segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	
	cout<<("Primeiro número: ");
	cout<<(primeiroNumero);
	cout<<("\n");
	
	cout<<("Segundo número: ");
	cout<<(segundoNumero);
	cout<<("\n");
	
	cout<<("Soma: ");
	cout<<(soma);
	
}
