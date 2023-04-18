#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    // Crear una pila de tipo int de 5 elementos
    stack<int> pila;
    for (int i = 1; i <= 5; i++){
        pila.push(i);
    }

    // Crear una cola de tipo int de 5 elementos
    queue<int> cola;

    // Transferir los elementos de la pila a la cola
    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }

    // Imprimir los elementos de la cola
    cout << "Elementos de la cola: ";
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    
    cout << endl;

    return 0;
}