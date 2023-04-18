/*Progra ma que de entrada lea un numero y diga si es par o impar
y que imprima la dereccion de memoria*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero, *puntero_numero; //Creando puntero llamado numero

    cout<<"Digite un numero: "; cin>>numero;

    puntero_numero = &numero; //Guardando la posicion de memoria en puntero

    if(*puntero_numero%2==0){ //Determinacion de numero par
        cout<<"El numero: "<<*puntero_numero<<" es par"<<endl;
        cout<<"Posicion: "<<puntero_numero<<endl;
    }
    else{ //Determinacion de numero impar
        cout<<"El numero: "<<*puntero_numero<<" es impar"<<endl;
        cout<<"Posicion: "<<puntero_numero<<endl;
    }

    system("pause");
    return 0;
}