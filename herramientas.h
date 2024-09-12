#pragma once
#include <string>
using namespace std;

///////aca punt.h se establecen las funciones y clases///














//////detallo la clase de herramientas/////////// Madu: Las clases van con Mayuscula al principio
class Herramientas
{

protected:
    string _nombre;
    float _peso;
    float  _longitud;

///constructor/////////Madu: faltaba encerrarlo en llaves

public:
    Herramientas (float peso_1,float longitud_1){

    float get_peso();
    float get_longitud();
    void set_peso(float peso_1);
    void set_longitud(float longitud_1);
    };









};








