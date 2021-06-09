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
	//Informacion sobre el programa
	cout<<"\t\t *** \t\t\n";
	cout<<"\t Registro de Calificaciones \n";
	cout<<"\t\t *** \t\t\n";
	
	//Declaracion de variables
	
	int cantEstudiantes = 0;
	int i = 1;

	string nombre_estudiante = " ";
	char literal = 'X';

	const double PesoCalExamen 		= 0.30;
	const double PesoCalParcial 	= 0.20;
	const double PesoCalActividad 	= 0.25;
	const double PesoCalTareas 		= 0.25;
	
	double CalExamen 	= 0.00;
	double CalParcial 	= 0.00;
	double CalActividad = 0.00;
	double CalTareas 	= 0.00;
	
	double CalFinal     = 0.0;
	
	
	   //Captura de datos
    	cout<<"Digite la cantidad de estudiantes: "<<endl;
    	cin>>cantEstudiantes;
    	
    	cin.ignore();
	
	while (i <= cantEstudiantes) {
	    

    	cout<<"Digite el nombre del estudiante: "<<endl;
    	getline(cin, nombre_estudiante);
    	
    	cout<<"Digite la puntuacion del parcial: "<<endl;	
    	cin>>CalParcial;
    	
    	cout<<"Digite la puntuacion del Examen final: "<<endl;
    	cin>>CalExamen;
    	
    	cout<<"Digite la puntuacion del las actividades: "<<endl;
    	cin>>CalActividad;
    	
    	cout<<"Digite la puntuacion de las tareas: "<<endl;
    	cin>>CalTareas;
    	
    	cin.ignore();
    	
    	
    	
    	//Realizacion de calculos para determinar calificacion final
        CalParcial = CalParcial * PesoCalParcial;
        CalExamen = CalExamen * PesoCalExamen;
        CalActividad = CalActividad * PesoCalActividad;
        CalTareas = CalTareas * PesoCalTareas;
        
        CalFinal = (int)(CalParcial + CalExamen + CalActividad + CalTareas);
        
       /****************************************
         de 90 a 100 lietal es A
         de 80 a 99 lietral es B
         de 70 a 89 literal es C
         de 60 a 69 literal es D
         menor de 60 literal es F
       ****************************************/
       
       if (CalFinal < 60) {
        
        literal = 'F';
        
    } else if (CalFinal >= 60 && CalFinal <= 69) {
        
        literal = 'D';
        
    } else if (CalFinal >= 70 && CalFinal <= 79) {
        
        literal = 'C';
        
    } else if (CalFinal >= 80 && CalFinal <= 89) {
        
        literal = 'B';
        
    } else if (CalFinal >= 90 && CalFinal <= 100) {
        
        literal = 'A';
        
    } else {
        literal = '-';
    }
    	     
    	    //Muestra de resultados
    	cout<<"El Estdiante "<<nombre_estudiante<<endl
    	         <<" Obtuvo una calificacion final de: "<<CalFinal<<endl
    	         <<" para un literal de: "<<literal<<endl
    	         <<endl;
    i++;
    
	}
    	         

	
	return 0;
}
