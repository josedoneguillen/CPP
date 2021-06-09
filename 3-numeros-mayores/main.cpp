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
    int num3 = 0;
        
        cout<<"Favor de ingresar un numero:"<<endl;
        cin>>num1;
        
        cout<<"Favor de ingresar un numero:"<<endl;
        cin>>num2;
        
        cout<<"Favor de ingresar un numero:"<<endl;
        cin>>num3;
        
        
        if (num1>num2) {
            
            if (num1>num3) {
            
                cout<<num1<<" Es mayor"<<endl;
            
            } else {
                
               
                cout<<num3<<" Es mayor"<<endl;
           
            }
            
        } else {
            
            if (num2>num3) {
            
                cout<<num2<<" Es mayor"<<endl;
            
            } else {
                
                cout<<num3<<" Es mayor"<<endl;
                
            }
            
            
            
        }
    

    return 0;
}
