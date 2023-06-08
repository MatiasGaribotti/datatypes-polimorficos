#include "DTProfesor.h"

DTProfesor::DTProfesor(string nombre, int experiencia) : DTUsuario(nombre){
    this->experiencia = experiencia;
}
int DTProfesor::getExperiencia() {
    return this->experiencia;
}
DTProfesor::~DTProfesor(){ }

bool DTProfesor::operator==(DTProfesor p) {
    return DTUsuario::operator==(p) && this->experiencia == p.getExperiencia();
}

