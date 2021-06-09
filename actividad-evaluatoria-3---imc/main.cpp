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
    cout<<"Calculando el IMC"<<endl;
    
    double peso = 0;
    double estatura = 0;
    double imc = 0;
    
    //imc = kg / m2

    /***********************************************
     * si imc < 16.0 tiene delgadez cevera
     * si imc esta entre 16.0 y 16.99 tiene delgadez moderada
     * si imc esta entre 17.00 y 18.49 tiene delgadez leve
     * si imc esta entre 18.50 y 24.99 esta normal
     * si imc esta entre 25.. y 29.99 esta pre obeso
     *********************************************/
     
    
    cout<<"Favor digitar su peso en libra: "<<endl;
    cin>>peso;
    
    cout<<"Favor digitar su estatura en metro: "<<endl;
    cin>>estatura;
    
    imc = ((peso/2.205)/(estatura*estatura));
    
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
        
    } else {
        cout<<"No aplica"<<endl;
    }
    
    
    return 0;
}
