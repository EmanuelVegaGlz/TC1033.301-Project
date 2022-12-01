// Clase Agencia

#include<string>
#include "auto.h"
#include "asesor.h"
using namespace std;

class Agencia{

private:
  string ubicacion, nombre;

  
public:
  Agencia(): ubicacion(""), nombre(""){};
  Agencia(string ubi, string nom): ubicacion(ubi), nombre(nom){};

  string get_ubicacion();
  string get_nombre();
  

  void set_ubicacion(string );
  void set_nombre(string );

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