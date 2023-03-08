/*Programa que calcule el area de un rectangulo*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int calculando_area(int base, int altura){  //Funcion que calcula el area del rectanguñlo
    int area;
    area = base * altura;
    return area;
}

int main (){
    int base, altura, area;

    cout<<"Escriba la base y la altura del rectangulo: "; //Pidiendo los datos del rectangulo
    cin>>base>>altura;

    area = calculando_area(base, altura);  //Llamando a la funcion que calcula el area

    cout<<"El area del rectangulo es: "<<area<<endl;

    system("pause");
    return 0;
}