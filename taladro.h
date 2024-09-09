
#pragma once

#include "herramientas.h"


class taladro:   public herramientas{


 private:
     float _potencia;
     string _taladro;

 public:

     taladro(string,float,float,float);
     string get_taladro();
     float get_potencia();









};
