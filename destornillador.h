
#pragma once
#include <string>
#include "herramientas.h"


using namespace std;








//////en el .H siempre hacemos la declaraciones//////////


class destornillador: public herramientas{


private:

    string _tipo_punta;
    string _destornillador;

public:

//////constructor/////////

destornillador (string ,float,float);


 string get_tipo_punta();

string get_tipo_destornillador();












};
