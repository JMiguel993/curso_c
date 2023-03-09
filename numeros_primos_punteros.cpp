/*Programa que de entrada lee un numero y determine
si es o no es un numero primo, y que imprima la direccion de memoria*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, num_divisores = 0, *puntero_numero;
    
    cout<<"Escriba un numero: "; cin>>numero;

    puntero_numero = &numero; //Guardando posicion de memoria en puntero

    /*Con el for calculo el total de divisores que puede tener el numero ingresado para determinar
    si es un numero primo o no es un numero primo*/
    for(int i=1; i<=*puntero_numero; i++){ 
        if(*puntero_numero%i == 0){
            num_divisores++;
        }
    }        

    if(num_divisores==2){ //Determinando si un numero es primo 
        cout<<"El numero "<<*puntero_numero<<" es primo"<<endl;
        cout<<"Posicion: "<<puntero_numero<<endl; //Mostrando en que espacio de memoria se encuentra
    }
    else{ //Determinando si el numero no es primo
        cout<<"El numero "<<*puntero_numero<<" no es primo"<<endl;
        cout<<"Posicion: "<<puntero_numero<<endl; //Mostrando en que espacio de memoria se encuentra
    }
    
    system("pause");
    return 0;
}