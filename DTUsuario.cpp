#include "DTUsuario.h"

DTUsuario::DTUsuario(string nombre) {
    this->nombre = nombre;
}

string DTUsuario::getNombre(){
    return this->nombre;
}

DTUsuario::~DTUsuario(){ }

bool DTUsuario::operator==(DTUsuario u) {
    return this->nombre == u.getNombre();
};
