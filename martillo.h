#pragma once
#include <string>
#include "herramientas.h"
using namespace std;

//////aca punto. se establecen las funciones y las clases///////////
//////cuando heredo siewmpre pongo el .H de la herencia















class martillo: public herramientas
{

private:
    string _tipo_cabeza;

public:
    /////////cosntructor///////////

    martillo(string tipo_cabeza,float peso,float longitud);

    string get_tipo_cabeza();


    string set_mostar_informacion();






};
;
