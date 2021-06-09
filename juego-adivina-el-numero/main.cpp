/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    
    int numero_generado = 0;
    int numero_digitado = 0;
    int contador = 0;
    int seguir_jugando = 1;
    bool gano = false;
    
    do {
    
        numero_generado = (rand() % 100)+1;
        cout<<numero_generado<<endl;
        
    for(int i = 0; i < 5; i++) {
        
        contador++;
        cout << " Adivina el numero: ";
        
        cin>>numero_digitado;
        
        if(numero_digitado > numero_generado)
            cout<<"El numero digitado es mayor"<<endl;
        else if(numero_digitado < numero_generado)
            cout<<"El numero digitado es menor"<<endl;
        else {
            cout<<"\n\nFelicidades has ganado!!!!!"<<endl;
            gano = true;
            break;
        }
    }
    
    if (!gano) {
        cout<<"\n\nQue mal! has perdido, el numero era: "<<numero_generado<<endl;
    }
    
    cout << "\nCantidad de intentos: "<<contador<< endl;
    
    cout <<"\nDeseas Seguir jugando?\nEscribe el numero de la opcion y presiona enter: "<<endl<<"1- Si\n2- No"<<endl;
    cin>>seguir_jugando;
    
    } while(seguir_jugando == 1);
    
     cout<<"\nAdios"<<endl;
    
    return 0;
}



