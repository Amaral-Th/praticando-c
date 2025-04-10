#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Escreva um programa que leia o lado de um quadrado e calcule sua área A = lado * lado.
	
	float ladoA, ladoB, resultadoArea;
	
	cout<<("Insira o primeiro lado: ");
	cin>>(ladoA);
	
	cout<<("Insira o segundo lado: ");
	cin>>(ladoB);
	
	resultadoArea = ladoA * ladoB;
	
	cout<<("O resultado da área é: ",resultadoArea);
	
	
}
