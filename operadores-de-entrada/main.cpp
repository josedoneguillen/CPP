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
    string name = "";
    int num1 = 0;
    int num2 = 0;

    
   cout<<"\n Concepto de un Operador de Entrada \n"<<endl;
   
   cout<<"Ingrese nombre: "<<endl;
   getline(cin, name);
   cout<<name<<endl;
   
   cout<<"Ingrese num1: "<<endl;
   cin>>num1;
   cout<<"num1: "<<num1<<endl;
   
   cout<<"Ingrese num2: "<<endl;
   cin>>num2;
   cout<<"num2: "<<num2<<endl;
   
   cin.ignore();
   
    return 0;
}