#ifndef DTUSUARIO_H
#define DTUSUARIO_H

#include <iostream>

using namespace std;

class DTUsuario {
    private:
        string nombre;
    public:
        DTUsuario(string nombre);

        string getNombre();

        bool operator==(DTUsuario u);
        ~DTUsuario();
};
#endif
