#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "taladro.h"

using namespace std;


taladro::taladro(string nombre,float peso,float longitud,float potencia_1):herramientas(nombre,peso,longitud){

   _potencia=potencia_1;
   _taladro="taladro";

   }


   float taladro::get_potencia(){

   return _potencia;

   }

   string taladro::get_taladro(){

    return _taladro;


   }
