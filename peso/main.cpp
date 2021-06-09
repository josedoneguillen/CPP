/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double peso = 0;
    double estatura = 0;
    double imc = 0;
    
    cout<<"Imgrese su peso en Kilogramos:"<<endl;
    cin>>peso;
    
    cout<<"Imgrese su estatura en metros:"<<endl;
    cin>>estatura;
    
    cin.ignore();
    
    imc = (peso/(estatura*estatura));
    
    if (imc < 16.00) {
        
        cout<<"Delgadez severa"<<endl;
        
    } else if (imc > 16.00 && imc < 16.99) {
        
        cout<<"Delgadez moderada"<<endl;
        
    } else if (imc > 17.00 && imc < 18.49) {
        
        cout<<"Delgadez leve"<<endl;
        
    } else if (imc > 18.50 && imc < 24.99) {
        
        cout<<"Normal"<<endl;
        
    } else if (imc > 25.00 && imc < 29.99) {
        
        cout<<"Peso obeso"<<endl;
        
    } else if (imc > 30.00 && imc < 34.99) {
        
        cout<<"Obesidad leve"<<endl;
        
    } else if (imc > 35.50 && imc < 39.99) {
        
        cout<<"Obesidad media"<<endl;
        
    } else if (imc >= 40.00) {
        
        cout<<"Obesidad morbida"<<endl;
        
    } else {
        cout<<"No aplica"<<endl;
    }
    
    
    
    
    
    

    return 0;
}

