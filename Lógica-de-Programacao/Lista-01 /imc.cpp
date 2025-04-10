#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	//5) Escreva um programa em linguagem C que solicite ao usuário que insira seu peso (em quilogramas) e sua altura (em metros). O programa deve então calcular o Índice de Massa Corporal (IMC) usando a fórmula: IMC = peso / altura * altura. Por fim, o programa deve exibir o valor do IMC na tela com duas casas decimais.
	
	float peso, altura, imc;
	
	cout<<("Qual é o seu peso? ");
	cin>>(peso);	
	
	cout<<("Qual é a sua altura? ");
	cin>>(altura);
	
	imc = peso / pow(altura, 2);
	
	cout << fixed << setprecision(2);
	
	cout<<("Altura: ");
	cout<<(altura);
	cout<<("\n");
	
	cout<<("Peso: ");
	cout<<(peso);
	cout<<("\n");
	
	cout<<("IMC: ");
	cout<<(imc);
	
	

}
