#pragma once
#include <string>
#include "herramientas.h"
using namespace std;

//////aca punto. se establecen las funciones y las clases///////////
//////cuando heredo siewmpre pongo el .H de la herencia















class martillo: public herramientas{

   private:
        string _tipo_cabeza;
        string  _martillo;

   public:
    /////////cosntructor///////////

    martillo(string nombre_1,float peso,float longitud);

    string get_tipo_cabeza();

    string get_tipo_martillo();

     ///void set_tipo_cabeza(string tipo_cabeza_1);






};
