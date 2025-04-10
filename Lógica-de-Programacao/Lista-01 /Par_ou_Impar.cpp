#include <iostream>
#include <cstdlib>
using namespace std;

int main( )
{
	/* Mini mundo: Um jogo sorteia um número e classifica como par ou ímpar.
 	  
 	   */
	
	int numero;
	
	cout<<("----------------------------\n");
	cout<<("     Jogo do sorteio      \n");
	cout<<("----------------------------");
	
	cout<<("\nInsira o número: ");
	cin>>(numero);
	
	if(numero % 2 == 0) 
	{	
		cout<<("Par");
	} 
	
	else 
	{
		cout<<("Ímpar");	
	};
	
}
