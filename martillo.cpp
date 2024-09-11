#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "martillo.h"
#include <string>

using namespace std;

















martillo::martillo(string tipo_cabeza,float peso,float longitud):herramientas(peso,longitud)
{

    _tipo_cabeza=tipo_cabeza;

    _nombre="martillo";



}

string  martillo::get_tipo_cabeza()
{

    return _tipo_cabeza;
}

 string martillo::set_mostar_informacion(){

return _nombre + " tipo de cabeza:" + _tipo_cabeza + " longitud: " + to_string(_longitud) + " kg:" + to_string(_peso);
 }
