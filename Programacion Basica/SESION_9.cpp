#include <iostream>

using namespace std;
//Declarar arreglo de 5 productos
//Remplazar el producto de la posicion 3 por computadora
//imprimir arreglo

int main(){
    string producto[5]= {"tv","laptop","nintendo","tablet","celular"}; //Declarando arreglo_productos.

    producto[2]= "computadora"; //Cambiando nintendo(posicion_3) por 'computadora'.

    for(int i=0; i<5; i++){ //Bucle para mostrar las nuevas posiciones del arreglo.
        cout<<"\nEl valor del vector producto ["<<i<<"] = "<< producto[i];
    }
    cout<<endl;

    return 0;
}