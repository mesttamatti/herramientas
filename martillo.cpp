#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "martillo.h"

using namespace std;











 martillo::martillo(string tipo_cabeza,float peso,float longitud):herramientas(tipo_cabeza,peso,longitud){

    _tipo_cabeza=tipo_cabeza;

     _martillo="martillo";

 }

string  martillo::get_tipo_cabeza(){

  return _tipo_cabeza;
  }

  string martillo::get_tipo_martillo(){

    return _martillo;


  }
