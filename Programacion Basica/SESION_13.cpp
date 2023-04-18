#include <iostream>
using namespace std;


int main() {
    // Declaración e inicialización de la matriz
    int matriz[4][5] = {
        {2, 5, 3, 7, 8},
        {1, 0, 6, 9, 4},
        {3, 2, 8, 5, 1},
        {7, 4, 2, 6, 9}
    };

    // Mostrar la matriz por pantalla
    cout << "Matriz original:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;

  // sumamos las filas
  for (int i = 0; i < 4; i++) {
    int sumafilas=0;
    for (int j = 0; j < 5; j++) {
      sumafilas += matriz[i][j];
    }
    // mostramos la suma de las filas
    cout << "La suma de la fila "<< i+1 <<" = "<<sumafilas<<endl;
  }
  cout<<endl;

  // sumamos las columnas
  for (int i = 0; i < 5; i++) {
    int sumacolumnas=0;
    for (int j = 0; j < 4; j++) {
      sumacolumnas += matriz[j][i];
    }
    // mostramos la suma de las columnas
    cout << "La suma de la columna "<< i+1 <<" = "<<sumacolumnas<<endl;
  }
  cout<<endl;

  // buscamos el maximo valor
  int maximo = matriz[0][0];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      if (matriz[i][j] > maximo) {
        maximo = matriz[i][j];
      }
    }
  }

  // mostramos el maximo valor
  cout << "El maximo valor de la matriz es: " << maximo << endl;


  // Calcular el promedio de cada fila
    double promedio_fila[4] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            promedio_fila[i] += matriz[i][j];
        }
        promedio_fila[i] /= 5;
    }

    // Mostrar el promedio de cada fila por pantalla
    cout << "\nPromedio de cada fila:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Fila " << i+1 << ": " << promedio_fila[i] << endl;
    }
    cout<<endl;

    // Calcular el promedio de cada columna
    double promedio_columna[5] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            promedio_columna[j] += matriz[i][j];
        }
    }
    for (int j = 0; j < 5; j++) {
        promedio_columna[j] /= 4;
    }

    // Mostrar el promedio de cada columna por pantalla
    cout << "Promedio de cada columna:" << endl;
    for (int j = 0; j < 5; j++) {
        cout << "Columna " << j+1 << ": " << promedio_columna[j] << endl;
    }
    cout<<endl;

    // Invertir la matriz a una de 5x4
    int matriz_invertida[5][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            matriz_invertida[j][i] = matriz[i][j];
        }
    }

    // Mostrar la matriz invertida por pantalla
    cout << "Matriz invertida:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int  j= 0; j < 5; j++) {
            cout << matriz_invertida[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}