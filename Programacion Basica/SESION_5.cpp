/*CALCULADORA BASICA con switch*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int calculando_suma(int n1, int n2){  //Funcion que calcula la suma de dos variables
    int suma;
    suma = n1 + n2;
    return suma;
}

int calculando_resta(int n1, int n2){ //Funcion que calcula la resta de dos variables
    int resta;
    resta = n1 - n2;
    return resta;
}

int calculando_multiplicacion(int n1, int n2){ //Funcion que calcula la multiplicacion de dos variables
    int multiplicacion;
    multiplicacion = n1 * n2;
    return multiplicacion;
}

int calculando_division(int n1, int n2){ //Funcion que calcula la division de dos variables
    int division;
    division = n1 / n2;
    return division;
}

int main(){
    int n1, n2, opcion, resta, suma ,division, multiplicacion;

    cout<<"\tCALCULADORA BASICA"; //Presentacion de la calculadora y sus opciones
    cout<<"\n1.SUMA";
    cout<<"\n2.RESTA";
    cout<<"\n3.MULTIPLICACION";
    cout<<"\n4.DIVISION";
    cout<<"\n5.SALIR";
    cout<<"\nDigite la opcion a realizar: "; cin>>opcion; //

    switch(opcion){  //El switch ejecuta los casos segun la opcion elegida por el usuario
        case 1: cout<<"Digite los valores 1 y 2: "; 
                cin>>n1>>n2;

                suma = calculando_suma(n1,n2);

                cout<<suma<<endl; break;

        case 2: cout<<"Digite los valores 1 y 2: "; 
                cin>>n1>>n2;

                resta = calculando_resta(n1,n2);
                
                cout<<resta<<endl; break;

        case 3: cout<<"Digite los valores 1 y 2: "; 
                cin>>n1>>n2;

                multiplicacion = calculando_multiplicacion(n1,n2);
                
                cout<<multiplicacion<<endl; break;

        case 4: cout<<"Digite los valores 1 y 2: "; 
                cin>>n1>>n2;

                division = calculando_division(n1,n2);
                
                cout<<division<<endl; break;

        default: break;
    }

    system("pause");
    return 0;
}