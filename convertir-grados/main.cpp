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
	cout<<"******************************"<<endl;
	cout<<"*       Calcular Grados      *"<<endl;
	cout<<"******************************"<<endl;
	
	//Declaracion de variables
	
	double Celsius             = 0.0;
	double Farenheit           = 0.0;

    	cout<<"Digite los grados celsius: "<<endl;	
    	cin>>Celsius;
    	
    	//Calculo
    	Farenheit = (int)((Celsius * 9/5) + 32);
    	
    	//Muestra de resultados
    	cout<<Celsius<<" Grados Celsius son "<< Farenheit<<" Grados Farenheit"<<endl;

	
	return 0;
}