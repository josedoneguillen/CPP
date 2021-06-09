/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
//Informacion sobre el programa
	cout<<"******************************"<<endl;
	cout<<"* Registro de Calificaciones *"<<endl;
	cout<<"******************************"<<endl;
	
	//Declaracion de variables
	string nombre_estudiante        = " ";
	
	const double PesoCalExamen 		= 0.30;
	const double PesoCalParcial 	= 0.20;
	const double PesoCalActividad 	= 0.25;
	const double PesoCalTareas 		= 0.25;
	
	double CalExamen                = 0.0;
	double CalParcial               = 0.0;
	double CalActividad             = 0.0;
	double CalTareas                = 0.0;
	double score                 = 0.0;
	string literal = "";
	

    	//Captura de datos
    	cout<<"Digite el nombre del estudiante: "<<endl;
    	
    	getline(cin, nombre_estudiante);
    	cout<<"Digite la puntuacion del parcial: "<<endl;	
    	cin>>CalParcial;
    	
    	cout<<"Digite la puntuación del Examen final: "<<endl;
    	cin>>CalExamen;
    	
    	cout<<"Digite la puntuación del las actividades: "<<endl;
    	cin>>CalActividad;
    	
    	cout<<"Digite la puntuación de las tareas: "<<endl;
    	cin>>CalTareas;
    	
    	//Realizacion de calculos para determinar calificacion final
        score = (CalExamen * PesoCalExamen) + (CalParcial * PesoCalParcial) + (CalActividad * PesoCalActividad) + (CalTareas * PesoCalTareas); 
    
    	     
    	    //Muestra de resultados
    	//cout<<"El Estdiante "<<nombre_estudiante<<" Obtuvo una calificacion final de: "<<CalFinal<<endl;

	
	

        
        /*cout<<"Escriba su calificacion:"<<endl;
        cin>>score;*/
    
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
    
    cout<<"El estudiante: "<<nombre_estudiante<<endl
    <<"obtubo una calificacion de: "<<score<<endl
    <<"la nota literal optenida fue: "<<literal<<endl;

    return 0;
}
