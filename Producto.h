//
// Created by Pablo Alcolea Sesse on 18/10/24.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
    std::string nproducto;
    float precio;

public:
    Producto();
    void setNproducto(const std::string &nproducto); // Added const reference
    std::string getNproducto() const;
    void setPrecio(float precio);
    float getPrecio() const;
};

#endif // PRODUCTO_H
