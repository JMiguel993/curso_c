//Cambio de variable  del ejercicio anterior con 53 con punteros
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero=20, *puntero_numero=&numero; //Declarando el numero

    cout<<"El valor del numero es: "<<numero<<endl;

    *puntero_numero = 53; //Cambiando la direccion

    cout<<"El nuevo valor del numero es: "<<numero<<endl;

    system("pause");
    return 0;
}