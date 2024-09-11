#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "herramientas.h"

using namespace std;

//////detallo la clase de herramientas///////////

herramientas::herramientas(float peso_1,float longitud_1)
{

    _peso=peso_1;
    _longitud=longitud_1;
    _nombre="";

    ///cout<<"peso:"<<peso_1<<" "<<"longitud:"<<longitud_1<<endl;
}

void herramientas::set_peso(float peso_1)
{

    if(peso_1>0)
    {

        _peso=peso_1;
    }

}

void herramientas::set_longitud(float longitud_1)
{

    if(longitud_1>0)
    {

        _longitud=longitud_1;


    }
}
float herramientas::get_peso()
{

    return _peso;

}

float  herramientas::get_longitud()
{

    return _longitud;
}

