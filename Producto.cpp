//
// Created by Pablo Alcolea Sesse on 18/10/24.
//

#include "Producto.h"

Producto::Producto() {}

void Producto::setNproducto(const std::string &nproducto) {
    this->nproducto = nproducto;
}

std::string Producto::getNproducto() const {
    return nproducto;
}

void Producto::setPrecio(float precio) {
    this->precio = precio;
}

float Producto::getPrecio() const {
    return precio;
}