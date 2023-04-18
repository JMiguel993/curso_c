#include <iostream>

using namespace std;
//Declarar un arreglo de 5 libros
//El usuario debe inglesar los libros
//Imprimir el arreglo

int main(){
    string libro1, libro2, libro3, libro4, libro5; //Declarando variables para almacenar lo digitado por el usuario.
    string libros[5]={"libro1","libro2" ,"libro3","libro4","libro5"};//Declarando arreglos_libros(aun sin valores).

    cout<<"Digite el primer libro: "; cin>>libro1; //Dando valor a libro1.
    libros[0]= libro1;                             //Remplazando del  valor de libro1(Digitado por el usuario) en el arreglo.
    cout<<"Digite el segundo libro: "; cin>>libro2;//Dando valor a libro2.
    libros[1]= libro2;                             //Remplazando del  valor de libro2(Digitado por el usuario) en el arreglo.
    cout<<"Digite el tercer libro: "; cin>>libro3; //Dando valor a libro3.
    libros[2]= libro3;                             //Remplazando del  valor de libro3(Digitado por el usuario) en el arreglo.
    cout<<"Digite el cuarto libro: "; cin>>libro4; //Dando valor a libro4.
    libros[3]= libro4;                             //Remplazando del  valor de libro4(Digitado por el usuario) en el arreglo.
    cout<<"Digite el quinto libro: "; cin>>libro5; //Dando valor a lirbo5.
    libros[4]= libro5;                             //Remplazando del  valor de libro5(Digitado por el usuario) en el arreglo.

    for(int i=0; i<5; i++ ){ //Bucle para mostrar el arreglo_libros.
        cout<<"\nEl valor del vector libro ["<<i<<"] = "<<libros[i]; //Enviando datos a la terminal.
    }
    
    return 0;
}