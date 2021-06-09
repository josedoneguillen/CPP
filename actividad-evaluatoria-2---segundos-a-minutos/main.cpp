/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    int v_minutos = 0;
    int v_segundos = 0;
    int v_seg_leidos = 0;
    
    cout<<"Digite los segundos: "<<endl;
    cin>>v_seg_leidos;
    
    v_minutos = v_seg_leidos / 60;
    v_segundos = v_seg_leidos % 60;
    
    cout<<v_seg_leidos<< " segundos equivalen a "<<v_minutos;
    
    if (v_minutos > 1) {
        
        cout<<" minutos y "<<v_segundos;
        
        if (v_segundos > 1 || v_segundos == 0) {
            
        cout<<" segundos"<<endl;
        
        } else {
            cout<<" segundo"<<endl;
        }
        
    } else {
        
        cout<<" minuto y "<<v_segundos;
        
        if (v_segundos > 1 || v_segundos == 0) {
            
        cout<<" segundos"<<endl;
        
        } else {
            cout<<" segundo"<<endl;
        }
        
    }
    
    
    return 0;    
}
