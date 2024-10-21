#include <iostream>

#include "Producto.h"
#include <string>

using namespace std;

float comparacion(const Producto &p1, const Producto &p2) {
    if (p1.getPrecio() == p2.getPrecio()){
        cout << "El producto de menor valor son: " << p2.getNproducto()<<", "<< p1.getNproducto()<< ", con un valor de:" << p2.getPrecio();
        }else if (p1.getPrecio() > p2.getPrecio()){
        cout << "El producto de menor valor es: " << p2.getNproducto() << ", con un valor de:" << p2.getPrecio();
        }else {
        cout << "El producto de menor valor es: " << p1.getNproducto() << ", con un valor de:" << p1.getPrecio();
        }

}
void pregunta (const Producto p1, const Producto p2) {
    cout << "Hay mas productos a comparar? (Si/No): ";
    string respuesta;
    cin >> respuesta;
    std::transform(respuesta.begin(), respuesta.end(), respuesta.begin(), ::tolower);
    if (respuesta == "si") {

    }
    else if (respuesta == "no") {
        comparacion(p1, p2);
    }
    else {
        cout << "Por favor, introduzca una respuesta valida";
        pregunta(p1, p2);
    }
}


int main() {
    Producto p1;
    cout << "Introduce el nombre del producto:";
    string producto_uno;
    cin >>  producto_uno;
    p1.setNproducto(producto_uno);
    cout << "Introduce el valor del producto uno:";
    float precio_uno;
    cin >> precio_uno;
    p1.setPrecio(precio_uno);

    Producto p2;
    cout << "Introduce el nombre del producto:";
    string producto_dos;
    cin >>  producto_dos;
    p2.setNproducto(producto_dos);
    cout << "Introduce el valor del producto dos:";
    float precio_dos;
    cin >> precio_dos;
    p2.setPrecio(precio_dos);

    pregunta(p1, p2);




    return 0;
}
