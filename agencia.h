// Clase Agencia

#include<string>
#include "auto.h"
#include "asesor.h"
using namespace std;

class Agencia{

private:
  string ubicacion, nombre;
  Suv lista_camionetas[2];
  Sedan lista_sedanes[2];
  Hatchback lista_hatch[2];

  
public:
  Agencia(): ubicacion(""), nombre(""){};
  Agencia(string ubi, string nom): ubicacion(ubi), nombre(nom){};

  string get_ubicacion();
  string get_nombre();
  

  void set_ubicacion(string );
  void set_nombre(string );
  void set_suv(Suv );
  void set_sedan(Sedan );
  void set_hatchback(Hatchback );


};

string Agencia::get_ubicacion(){
  return ubicacion;
}

string Agencia::get_nombre(){
  return nombre;
}

void Agencia::set_ubicacion(string ubi){
  ubicacion = ubi;
}

void Agencia::set_nombre(string nom){
    nombre = nom;
}

void Agencia::set_suv(Suv auto){
    lista_camionetas[1] = auto;
}

void Agencia::set_sedan(Sedan auto){
  lista_sedanes[1] = auto;
}

void Agencia::set_hatchback(Hatchback auto){
  lista_hatch[1] = auto;
}