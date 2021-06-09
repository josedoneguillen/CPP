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
    int num1 = 0;
    int num2 = 0;
    
    cout<<"Escriba un numero: "<<endl;
    cin>>num1;
    
    cout<<"Escriba otro numero: "<<endl;
    cin>>num2;
    
    if (num1 > num2) {
        cout<<"El numero: "<<num1<<" es mayor"<<endl;
    } else {
        cout<<"El numero: "<<num2<<" es mayor"<<endl;
    }
    

    return 0;
}
