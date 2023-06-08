#include <iostream>
#include "DTUsuario.h"
#include "DTEstudiante.h"
#include "DTProfesor.h"
int main() {
    DTProfesor profe = DTProfesor("jose", 1);
    cout << profe.getNombre() << " tiene " << profe.getExperiencia() << " años de experiencia\n";
    DTEstudiante estu = DTEstudiante("estudiante1", 5);
    cout << estu.getNombre() << " está en la clase " << estu.getClase() << "\n";
    DTEstudiante estu2 = DTEstudiante("estudiante1", 5);
    cout << estu.getNombre() << " está en la clase " << estu.getClase() << "\n";

    // data types diff
    DTEstudiante estu3 = DTEstudiante("estudiante3", 10);
    cout << estu.getNombre() << " está en la clase " << estu.getClase() << "\n";

    cout << "estu1 ==? estu2 " << (estu == estu2) << "\n";
    cout << "estu1 ==? estu3 " << (estu == estu3) << "\n";
    return 0;
}
