#pragma once
#include <string>
using namespace std;

///////aca punt.h se establecen las funciones y clases///














//////detallo la clase de herramientas///////////
class herramientas
{

protected:
    string _nombre;
    float _peso;
    float  _longitud;

///constructor/////////

public:
    herramientas (float peso_1,float longitud_1);

    float get_peso();
    float get_longitud();
    void set_peso(float peso_1);
    void set_longitud(float longitud_1);










};








