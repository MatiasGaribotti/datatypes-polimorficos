#include "DTEstudiante.h"

DTEstudiante::DTEstudiante(string nombre, int clase) : DTUsuario(nombre){
    this->clase = clase;
}
int DTEstudiante::getClase() {
    return this->clase;
}

DTEstudiante::~DTEstudiante(){ }

bool DTEstudiante::operator==(DTEstudiante e) {
    return DTUsuario::operator==(e) && this->clase == e.getClase();
}
