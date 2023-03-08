/*Programa que lea de entrada 3 notas
y de salida una letra segun el promedio de sus tres notas*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int calcular_promedio(int nota1, int nota2, int nota3){ //Funcion para calcular el promedio
    int promedio;
    promedio = (nota1+nota2+nota3)/3; //calculadno el promedio 1+2+3+4..../n 
    return promedio;
}

int main(){ //Funcion de salida para el programa
    int nota1, nota2, nota3, promedio;

    cout<<"Escriba las notas del alumno:\n"; cin>>nota1>>nota2>>nota3;

    promedio = calcular_promedio(nota1,nota2,nota3); //LLamando a la funcion que calcula el promedio

    switch( promedio>=18 ){   //El switch designa las letras segun el promedio 
        case 1 : cout<<"A"<<endl; break; //promedio 18, 19 o 20
    }

    switch( promedio<18 && promedio>15 ){ //promedio 16 o 17
        case 1 : cout<<"B"<<endl; break;
    }

    switch( promedio<=15 && promedio>11){ //promedio 12, 13, 14, 15
        case 1 : cout<<"C"<<endl; break;
    }

    switch( promedio<=11 && promedio>5){ //promedio 6, 7, 8 ,9 10, 11
        case 1 : cout<<"F"<<endl; break;
    }

    switch( promedio<= 5){ //promedio 1, 2, 3, 4, 5
        case 1 : cout<<"G"<<endl; break;
    }

    system("pause");
    return 0;
}