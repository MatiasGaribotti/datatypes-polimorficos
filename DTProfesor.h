#ifndef DTPROFESOR_H
#define DTPROFESOR_H

#include "DTUsuario.h"
#include <iostream>

using namespace std;

class DTProfesor : public DTUsuario {
    private:
        string nombre;
        int experiencia;
    public:
        DTProfesor(string nombre, int experiencia);

        int getExperiencia();

        bool operator==(DTProfesor);
        ~DTProfesor();
};
#endif
