/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    //Declarar variables
    int num1, num2, suma, resta, multiplicacion, modulo;
    double division;
    
    //Solicitar numeros
    cout<<"Escriba el numero 1: "<<endl;
    cin>>num1;
    
    cout<<"Escriba el numero 2: "<<endl;
    cin>>num2;
    
    //Realizar operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    modulo = num1 / num2;
    division = num1 % num2;
    
    //Imprimir resultados
    cout<<"El resultado de la suma es: "<<suma<<endl;
    cout<<"El resultado de la resta es: "<<resta<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
    cout<<"El residuo de la division es: "<<modulo<<endl;
    cout<<"El resultado de la division es: "<<division<<endl;

    return 0;
}
