/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void f_muestra_articulos(){
    cout<<"\t\t1 - Yaroa"<<endl;
    cout<<"\t\t2 - Quipe"<<endl;
    cout<<"\t\t3 - Empanda"<<endl;
    cout<<"\t\t4 - Sandwitch"<<endl;
}

int main()
{
    double precios[5] = {50.0,30.0,35.00,70.00};
    string productos[5] = {"Yaroa","Quipe","Empanda","Sandwitch"};
    double precio_producto = 0.0;
    int codigo_producto = 0;
    int cant_productos = 0;
    double subtotal = 0.0;
    double descuento = 0.0;
    double propina = 0.0;
    double total = 0.0;
    
    cout<<"\t\tCafeteria la Opcion"<<endl;
    cout<<"\t\t\t***"<<endl;
    cout<<"\t\tMenu de opciones"<<endl;
    
    f_muestra_articulos();
    
    cout<<"\n\tFacturar producto: ";
    cin>>codigo_producto;
    precio_producto = precios[codigo_producto-1];
    
    //Pide al usuario que indique la cantidad de productos a facturar.
    cout<<"\n\tCantindad: ";
    cin>>cant_productos;
    
    //Realizar calculo para obtener monto a facturar = precio_factura * cantidad_producto
    subtotal = precio_producto * cant_productos;
    total = subtotal;
    
    //Si son mas de 5 Productos, aplica 2% de descuento al Monto final
    if (cant_productos > 5) {
        descuento = subtotal * 0.02;
        total -= descuento;
    }
    
    //Si el monto final está por encima de 250, sumale 1% de propina.
    if (total > 250) {
        propina = total * 0.01;
        total += propina;
    }
    
    //Mostrar en pantalla resultados. Ejemplo:
    /*
        Cantidad    producto    precio      Monto     descuento   propina  Monto Final
           5         Quipe       30.00      150.00      0           1.5       151.5   
    */
    
    cout<<"\n\nCantidad    producto    precio      Monto     descuento   propina  Monto Final"<<endl;
    cout
    <<"    "
    <<cant_productos
    <<"        "
    <<productos[codigo_producto-1]
    <<"        "
    <<precio_producto
    <<"         "
    <<subtotal
    <<"          "
    <<descuento
    <<"          "
    <<propina
    <<"        "
    <<total
    <<"    "
    <<endl;
    
    return 0;
}



