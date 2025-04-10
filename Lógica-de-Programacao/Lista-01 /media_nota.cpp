#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main() {
	//2) Faça um programa que leia três notas de um aluno, calcule a média aritmética e exiba o resultado.
	
	float nota1, nota2, nota3, media;
	
	cout<<("Imprima a primeira nota: ");
	cin>>(nota1);
	
	cout<<("Imprima a segunda nota: ");
	cin>>(nota2);
	
	cout<<("Imprima a terceira nota: ");
	cin>>(nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	cout<<"A conta feita foi (" << nota1 << "+" << nota2 << "+" << nota3 << ") / 3 \n";
	cout<< "A media eres "  << media;
	cout<<("\n");
	
	if(media < 6) {
		cout<<("REPROVADO!");
	}
	
	else {
		cout<<("APROVADO!");
	};
	
}
