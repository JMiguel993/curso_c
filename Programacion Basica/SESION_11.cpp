#include <iostream>

using namespace std;
//Declara un arreglo con el precio de los productos
//Precios ingresados por el usuario
//Imprimir arreglo
//Imprimir valor maximo de arreglo
//imprimir el valor maximo del indice del arreglo

int main(){
    int p1, p2 ,p3, p4 ,p5; //seas P=precio del producto
    float precios[5]= {p1,p2,p3,p4,p5};

    cout<<"Ingrese el precio del primer producto: "; cin>>p1; //Obteniendo el precio_1 del usuario
    precios[0]= p1;                                           //Guardando el precio_1 en el arreglo
    cout<<"Ingrese el precio del segundo producto: "; cin>>p2; //Obteniendo el precio_2 del usuario
    precios[1]= p2;                                            //Guardando el precio_2 en el arreglo
    cout<<"Ingrese el precio del tercer producto: "; cin>>p3; //Obteniendo el precio_3 del usuario
    precios[2]= p3;                                           //Guardando el precio_3 en el arreglo
    cout<<"Ingrese el precio del cuarto producto: "; cin>>p4; //Obteniendo el precio_4 del usuario
    precios[3]= p4;                                           //Guardando el precio_4 en el arreglo
    cout<<"Ingrese el precio del quinto producto: "; cin>>p5; //Obteniendo el precio_5 del usuario
    precios[4]= p5;                                           //Guardando el precio_5 en el arreglo

    for(int i=0; i<5; i++){ //Imprimiendo valor maximo y la posicion
        cout<<"\nEl valor del precio del vector precio["<<i<<"] = "<<precios[i];
    }
    return 0;
}