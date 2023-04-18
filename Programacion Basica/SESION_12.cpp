#include <iostream>
using namespace std;

void mayor_menor_igual(int arreglo[], int tamaño){

    //Numero menor
    int menor = arreglo[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (arreglo[i] < menor)
        {
            menor = arreglo[i]; // actualizamos el valor del menor
        }
    }

    // Numero mayor
    int mayor = arreglo[0];

    for (int i = 1; i < tamaño; i++)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i]; // actualizamos el valor del mayor
        }
    }

    // Numero igual
    int numero_igual = 0;
    int cont =0;
      for (int i = 0; i < tamaño-1; i++)
      {
          int numero_igual_temp = arreglo[i];
          for (int y = i+1; y <tamaño; y++)
          {
              if (numero_igual_temp == arreglo[y])
              {
                  numero_igual = arreglo[y];
                  cont++;
              }
        }
    }

    cout << "\nEl numero menor es: " << menor << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero igual es: " << numero_igual << endl;
}

void numeros_repite(int arreglo[],int tamaño){ // numeros que se repiten en un arreglo

    cout << "\nLos numeros que se repiten en el arreglo son: ";
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = i + 1; j < tamaño; j++) {
            if (arreglo[i] == arreglo[j]) {
                cout << arreglo[i] << " "; // imprimimos el número que se repite
                break;
            }
        }
    }
    cout << endl;
}

void ordenamiento(int arreglo[],int tamaño){ // ordenamiento

    // ordenar la lista de mayor a menor
    for (int i = 0; i < tamaño ; i++){

        for (int y = i+1; y < tamaño; y++){

            if (arreglo[i]<arreglo[y]){ 
                int varTemp = arreglo[y];
                arreglo[y] = arreglo[i];
                arreglo[i]= varTemp;
            }
        }
    }

    cout<<"\nOrdenando de mayor a menor: "<<endl;
    for(int i=0; i<tamaño;i++){
        cout<<arreglo[i]<<endl;
    }

    // ordenar la lista de menor a mayor >
    for (int i = 0; i < tamaño ; i++){

        for (int y = i+1; y < tamaño; y++){

            if (arreglo[i]>arreglo[y]){ 
                int varTemp = arreglo[y];
                arreglo[y] = arreglo[i];
                arreglo[i]= varTemp;
            }
        }
    }

    cout<<"\nOrdenando de menor a mayor: "<<endl;
    for(int i=0; i<tamaño;i++){
        cout<<arreglo[i]<<endl;
    }
   
}

int main(){
    int arreglo[] = {0, 5, 3, 20, 15, 3, 35, 45, -1, 3};
    int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    cout << tamaño << endl;

    // valor maximo de manera dinamica

    for (int i = 0; i < tamaño; i++)
    {
        // cout<<"\n"<<"el valor se repite: "<<i;
        cout << "\n" << "El valor del vecto a[" << i << "] = " << arreglo[i];
    }
    cout<<endl;

    mayor_menor_igual(arreglo,tamaño);

    int arreglo2[] = {5, 10, 2, 8, 5, 3, 10, 2, 2};
    int tamaño2 = sizeof(arreglo2) / sizeof(arreglo2[0]);

    numeros_repite(arreglo2,tamaño2);

    int arreglo3[] = {1, 2, 3, 4, 5};
    int tamaño3 = sizeof(arreglo3) / sizeof(arreglo3[0]);

    ordenamiento(arreglo3,tamaño3);

    cout<<endl;

  return 0;
}

    

