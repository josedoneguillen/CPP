/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    //Declarar variable de altura o pisos de la piramide
    int p = 10;
    for (int a = 1; a <= p; a++) {
        //calcula los espacios del lado izquierdo
        for (int b = 0; b < p -a; b++) {
            cout << "  ";
        }
        //imprime crecientemente los asteriscos del lado izquierdo y su espacio
        for (int c = 1; c < a ;c++) {
            cout << c << " ";
        }
        //imprime crecientemente los asteriscos del lado derecho y su espacio
        for (int d = 0; d < a; d++) {
            cout << a-d << " ";
        }
        //imprime el salto de linea en cada fila
        cout <<"\n";
    }

    return 0;
}
