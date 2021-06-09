/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

char f_devuelve_literal(double pcalificacion){
    char literal;
    if(pcalificacion >= 90)
    	 {
    	     literal = 'A';
    	 }
    	 else if (pcalificacion >= 80){
    	     literal = 'B';
    	 }
    	 else if (pcalificacion >= 70){
    	     literal = 'C';
    	 }
    	 else {
    	     literal = 'F';
    	 }
    	 
    	 return literal;
}

double f_devuelve_calFinal(
    double CalParcial, 
    double PesoCalParcial, 
    double CalExamen, 
    double PesoCalExamen, 
    double CalActividad, 
    double PesoCalActividad, 
    double CalTareas, 
    double PesoCalTareas
    ){
        double CalFinal;
    
        CalParcial    *= PesoCalParcial;
    	CalExamen     *= PesoCalExamen;
    	CalActividad  *= PesoCalActividad;
    	CalTareas     *= PesoCalTareas;
    	
    	CalFinal = (CalParcial + CalExamen + CalActividad + CalTareas);
    	 
    	 return CalFinal;
}

int main()
{
	//Informacion sobre el programa
	std::cout<<"\t\t *** \t\t\n";
	std::cout<<"\t Registro de Calificaciones \n";
	std::cout<<"\t\t *** \t\t\n";
	
	//Declaracion de variables

	std::string nombre_estudiante = " ";
	double CalExamen 	= 0.0;
	double CalParcial 	= 0.0;
	double CalActividad = 0.0;
	double CalTareas 	= 0.0;
	char lieteral = 'x';
	
	const double PesoCalExamen 		= 0.30;
	const double PesoCalParcial 	= 0.20;
	const double PesoCalActividad 	= 0.25;
	const double PesoCalTareas 		= 0.25;
	
	double CalFinal = 0.0;
	int control = 0;
	int cantidad_estudiantes = 0;
	
std::cout<<"Cuantos estudiantes desea ingresar: ";
std::cin>>cantidad_estudiantes;
std::cin.ignore();

while(control < cantidad_estudiantes)
{
    	//Captura de datos
    	std::cout<<"Digite el nombre del estudiante: ";
    	getline(std::cin,nombre_estudiante);
    	std::cout<<"Digite la puntuacion del parcial: ";	
    	std::cin>>CalParcial;
    	
    	std::cout<<"Digite la puntuacion del Examen final: ";
    	std::cin>>CalExamen;
    	
    	std::cout<<"Digite la puntuaciC3n del las actividades: ";
    	std::cin>>CalActividad;
    	
    	std::cout<<"Digite la puntuaciC3n de las tareas: ";
    	std::cin>>CalTareas;
    	
    	std::cin.ignore();
    	
    	//Realizacion de calculos para determinar calificacion final
    	//LLevar a una funcion
    	
    	/*CalParcial    = (CalParcial * PesoCalParcial);
    	CalExamen     = (CalExamen * PesoCalExamen);
    	CalActividad  = (CalActividad * PesoCalActividad);
    	CalTareas     = (CalTareas * PesoCalTareas);
    	
    	CalFinal = (CalParcial + CalExamen + CalActividad + CalTareas);*/
    	
    	//Llamado a la funcion para calcular calificacion final
    	CalFinal = f_devuelve_calFinal(
    CalParcial, 
    PesoCalParcial, 
    CalExamen, 
    PesoCalExamen, 
    CalActividad, 
    PesoCalActividad, 
    CalTareas, 
    PesoCalTareas
    );
    	
    	
    	//Determinacion del literal
    	lieteral = f_devuelve_literal(CalFinal);
    	     
    	    //Muestra de resultados
    	std::cout<<std::endl<<"El Estdiante "<<nombre_estudiante
    	         <<" Obtuvo una calificacion final de: "<<CalFinal
    	         <<" lo que equivale a un literal de: "<< lieteral 
    	         <<std::endl<<std::endl;
  control++;
}
	
	return 0;
}
