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
	cout<<"**********************************"<<endl;
	cout<<"*       Detectar numero par      *"<<endl;
	cout<<"**********************************"<<endl;
	
		int num = 0;
	

    	cout<<"Digite un numero: "<<endl;	
    	cin>>num;
    	
    	if ((num % 2) == 0) {
    	    
    	    cout<<"El numero "<<num<<" es par"<<endl;
    	    
    	} else {
    	    
    	    cout<<"El numero "<<num<<" no es par"<<endl;
    	}
    	    
    

    return 0;
}
