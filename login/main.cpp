/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <conio.h>

using namespace std;

struct User{
    string name;
    int age;
    string email;
    string password;
}User1;

int main()
{
    string email = "";
    string password = "";

    
   cout<<"\n Registrese en el sistema \n"<<endl;
   
   cout<<"Ingrese nombre: "<<endl;
   getline(cin, User1.name);
   
   cout<<"Ingrese edad: "<<endl;
   cin>>User1.age;
   
   cin.ignore();
   
   cout<<"Ingrese email: "<<endl;
   getline(cin, User1.email);
   
   cout<<"Ingrese contraseña: "<<endl;
   getline(cin, User1.password);
   


do {
       cout<<"\n Inicie Cesión en el sistema \n"<<endl;
   
        cout<<"email: "<<endl;
        getline(cin, email);
   
        cout<<"contraseña: "<<endl;
        getline(cin, password);
        
        if(email == User1.email && password == User1.password) {   
            break;
        } else {
            cout<<"\n Error de autenticación \n"<<endl;
            continue;
        }
        
    } while(true);   
    
    cout<<"Bienvenido: "<<User1.name<<", su edad es: "<<User1.age<<endl;
   
    getch();
    return 0;
}
