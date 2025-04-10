#include <iostream>
#include <cstdlib>
using namespace std;

int main( )
{
	 /* 3. Verificar se a pessoa pode votar
 		Mini mundo: Um sistema de votação precisa verificar se a pessoa pode votar (idade >= 16).
	*/
	
	int idade;
	
	cout<<("Digite sua idade: ");
	cin>>(idade);
	
	if(idade >= 16) 
	{
	cout<<("Pode votar.");	
	}
	else
	{
	cout<<("Não pode votar.");	
	}
	
	
}
