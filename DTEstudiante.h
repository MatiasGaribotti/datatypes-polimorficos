#ifndef DTESTUDIANTE_H
#define DTESTUDIANTE_H

#include "DTUsuario.h"
#include <iostream>

using namespace std;

class DTEstudiante : public DTUsuario {
    private:
        string nombre;
        int clase;
    public:
        DTEstudiante(string nombre, int clase);

        int getClase();

        bool operator==(DTEstudiante);
        ~DTEstudiante();
};
#endif
