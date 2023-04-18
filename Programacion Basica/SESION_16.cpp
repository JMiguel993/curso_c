#include<iostream>
using namespace std;

class Cuadrilatero { //Clase cuadrilatero

    private:
        float lado_1, lado_2, lado_3, lado_4;

    public:
        Cuadrilatero(float lado1, float lado2, float lado3, float lado4) {
            lado_1 = lado1;
            lado_2 = lado2;
            lado_3 = lado3;
            lado_4 = lado4;
        }

        // Métodos para manipular variables
        void setLado1(float lado1){
            lado_1 = lado1;
        }

        void setLado2(float lado2){
            lado_2 = lado2;
        }

        void setLado3(float lado3){
            lado_3 = lado3;
        }

        void setLado4(float lado4){
            lado_4 = lado4;
        }

        // Métodos para calcular el área y el perímetro
        float area(){
            return lado_1 * lado_2;
        }

        float perimetro(){
            return lado_1 + lado_2 + lado_3 + lado_4;
        }
};

int main() {
    // Crear objeto Cuadrilatero con lados 5, 7, 5 y 7
    // Obtener el área y el perímetro del cuadrilátero
    // Cambiar el valor del lado 1 y obtener el nuevo área y perímetro

    Cuadrilatero rec(5, 7, 5, 7);
    cout<<"\nEl area del cuadrilatero es: " << rec.area() << endl;
    cout<<"El perimetro del cuadrilatero es: " << rec.perimetro() << endl;
    cout<<endl;

    rec.setLado1(8);//Cambiando valor por 8
    cout<<"El area del cuadrilatero es ahora: " << rec.area() << endl;
    cout<<"El perimetro del cuadrilatero es ahora: " << rec.perimetro() << endl;

    return 0;
}