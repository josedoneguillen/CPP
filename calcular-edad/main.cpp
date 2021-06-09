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
	cout<<"************************************"<<endl;
	cout<<"*       Calcular edad a fecha      *"<<endl;
	cout<<"************************************"<<endl;
	
	//Declaracion de variables
	int edad = 0;
	int d = 0;
	int s = 0;
	int m = 0;
	
	cout<<"Ingrese su edad: "<<endl;
	cin>>edad;
	
	m = edad * 12;
	d = m / 23.83;
	s = d / 7;
	
	cout<<"Su edad es: "<<edad<<endl<<"meses: "<<m<<endl<<"dias: "<<d<<endl<<"semanas: "<<s<<endl;
	

    return 0;
}
