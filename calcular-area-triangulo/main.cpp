/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
//Informacion sobre el programa
	cout<<"***************************************"<<endl;
	cout<<"*      Convertir dolares a pesos      *"<<endl;
	cout<<"***************************************"<<endl;
	
	//Declaracion de variables
	
	const double TasaDolar      = 53.5;
	double Dolares              = 0.0;
	double Pesos                = 0.0;

    	cout<<"Digite la cantidad de dolares: "<<endl;	
    	cin>>Dolares;
    	
    	//Calculo
    	Pesos = (Dolares * TasaDolar);
    	
    	//Muestra de resultados
    	cout<<"US$ "<<Dolares<<" Son RD$ "<<Pesos<<endl;

	
	return 0;
}