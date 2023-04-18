/*Calculadora que pida de entrada que operacion
quiera realizar(suma, resta, multiplicacion,division)
y de salida la resulucion de la operacion elegida*/

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

int  main (){  //funcion de salida del programa

    int n1, n2, opcion, suma, resta, multiplicacion, division, resultado=0;    

    cout << " ingrese una opcion: \n 1: suma \n 2: resta \n 3: multiplicacion \n 4: division\n " ;
    cin >> opcion;  //Eligiendo la operacion que desea realizar

    if (opcion == 1 ){  //PRIMERA OPCION ELEGIDA
        cout << " ingrese valor 1 " ; cin >> n1;
        cout << " ingrese valor 2 " ; cin >> n2;
    
        resultado = calculando_suma(n1,n2); //Llamando a la funcion suma

        cout<< " \n " ;
        cout <<resultado;
        cout<< " \n " ; 
    }

    if (opcion == 2 ){ //SEGUNDAO OPCION ELEGIDA
        cout << " ingrese valor 1 " ; cin >> n1;
        cout << " ingrese valor 2 " ; cin >> n2;

        resultado = calculando_resta (n1,n2); //Llamando a la funcion resta

        cout<< " \n " ;
        cout <<resultado;
        cout<< " \n " ;     
    }

    if (opcion == 3 ){ //TERCERA OPCION ELEGIDA
        cout << " ingrese valor 1: " ; cin >> n1;
        cout << " ingrese valor 2: " ; cin >> n2;

        resultado = calculando_multiplicacion(n1,n2); //Llamando a la funcion multiplicacion

        cout<< " \n " ;
        cout <<resultado;
        cout<< " \n " ;
    }

    if (opcion == 4 ){  // CUARTA OPCION ELEGIDA
        cout << " ingrese valor 1: " ; cin >> n1;
        cout << " ingrese valor 2: " ; cin >> n2;
    
        resultado = calculando_division(n1,n2); //Llamando a la funcion division

        cout<< " \n " ;
        cout <<resultado;
        cout<< " \n " ;
    }
    
    system("pause");
    return  0 ;
}


