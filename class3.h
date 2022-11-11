// Clase Asesor

#include<string>
using namespace std;

class Asesor{

private:
  string nombre, correo, celular;
  
public:
  Asesor(): nombre(""), correo(""), celular(""){};
  Asesor(string nom, string corr, string cel): nombre(nom), correo(corr), celular(cel){};

  string get_nombre();
  string get_correo();
  string get_celular();

  void set_nombre(string );
  void set_correo(string );
  void set_celular(string );



};

string Asesor::get_nombre(){
  return nombre;
}

string Asesor::get_correo(){
  return correo;
}

string Asesor::get_celular(){
  return celular;
}

void Asesor::set_nombre(string nom){
    nombre = nom;
}

void Asesor::set_correo(string corr){
  correo = corr;
}

void Asesor::set_celular(string cel){
  celular = cel;
}