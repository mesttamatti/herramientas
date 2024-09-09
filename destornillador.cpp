
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "destornillador.h"

using namespace std;


destornillador::destornillador(string tipo_punta,float peso,float longitud):herramientas(tipo_punta,peso,longitud){


   _tipo_punta=tipo_punta;

   _destornillador="destornillador";



}


 string destornillador::get_tipo_punta(){

     return _tipo_punta;

 }

 string destornillador::get_tipo_destornillador(){

   return _destornillador;


 }

