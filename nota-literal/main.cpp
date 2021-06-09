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
    unsigned int score = 0;
    string literal = "";

        
        cout<<"Escriba su calificacion:"<<endl;
        cin>>score;
    
    if (score >= 0 && score <= 69) {
        
        literal = "F";
        
    } else if (score >= 70 && score <= 74) {
        
        literal = "D";
        
    } else if (score >= 75 && score <= 79) {
        
        literal = "C";
        
    } else if (score >= 80 && score <= 84) {
        
        literal = "B";
        
    } else if (score >= 85 && score <= 89) {
        
        literal = "B+";
    
    } else if (score >= 90 && score <= 94) {
        
        literal = "A";
        
    } else if (score >= 95 && score <= 100) {
        
        literal = "A+";
    } else {
        literal = "NO DISPONIBLE";
    }
    
    cout<<"La nota optenida fue: "<<literal<<endl;

    return 0;
}
