#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "herramientas.h"
#include "martillo.h"
#include "destornillador.h"
#include "taladro.h"
using namespace std;












int main() {

////////cuando heredo en el main siempre los .H de los dos///////////
 string nombre;
 string cabeza;
 string tipo_destornillador;
 float peso,longitud,potencia;

 /////////////
 cout<<"nombre , peso, longitud:"<<endl;
 cin>>nombre;
 cin>>peso;
  cin>>longitud;
  cout<<"tipo de cabeza"<<endl;
  cin>>cabeza;
  cout<<" tipo de puta destornillador:"<<endl;
  cin>>tipo_destornillador;
  cout<<"potencia:"<<endl;
  cin>>potencia;
///////////////////////
     destornillador  objeto_2(tipo_destornillador,peso,longitud);
     taladro        objeto_3(nombre,potencia,peso,longitud);


   martillo    objeto(cabeza,peso,longitud);

   herramientas objeto_1(nombre,peso,longitud);


   cout<<"herramienta:"<<objeto_1.get_nombre()<<endl;
   cout<<"peso:"<<objeto_1.get_peso()<<endl;
   cout<<"longitud:"<<objeto_1.get_longitud()<<"centimetros"<<endl;
   cout<<objeto.get_tipo_martillo()<<endl;
   cout<<"tipo de cabeza:"<<objeto.get_tipo_cabeza()<<endl;
   cout<<objeto_2.get_tipo_destornillador()<<endl;
   cout<<"tipo de punta del destornillador:"<<objeto_2.get_tipo_punta()<<endl;


    return 0;}