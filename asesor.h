/*
 * Proyecto final TC1033.
 * Pensamiento Computacional Orientado a objetos.
 * Profesor: Benjamín Valdés Aguirre.
 * Nombre: Emanuel Josué Vega González.
 * ID: A01710366.
 */

/*
 * Clase asesor contiene setters y geters para 
 * accesar a la informacion de contacto del asesor
 */

#ifndef ASESOR_H_
#define ASESOR_H_

#include<string>
using namespace std;

//Declaracion de clase Asesor
class Asesor{

private:

  //Atriubutos de la clase
  string nombre, correo, celular;
  
public:

  /**
  * Constructor por default
  *
  * @param
  * @return Objeto Asesor
  */
  Asesor(): nombre(""), correo(""), celular(""){};

  /**
  * Constructor donde recibe valores para llenar las variables de instancia
  *
  * @param string nom: nombre del asesor, string corr: correo eletronico,
  * string cel: numero celular del asesor
  * @return Objeto Agencia
  */
  Asesor(string nom, string corr, string cel): 
  nombre(nom), correo(corr), celular(cel){};

  //Metodos de la clase
  string get_nombre();
  string get_correo();
  string get_celular();

  void set_nombre(string );
  void set_correo(string );
  void set_celular(string );

};

//Getters

/**
 * getter nombre
 *
 * @param
 * @return string: nombre
*/
string Asesor::get_nombre(){
  return nombre;
}

/**
 * getter correo
 *
 * @param
 * @return string: correo
*/
string Asesor::get_correo(){
  return correo;
}

/**
 * getter celular
 *
 * @param
 * @return string: celular
*/
string Asesor::get_celular(){
  return celular;
}

//Setters

/**
 * setter nombre
 *
 * @param string nom: nombre
 * @return
*/
void Asesor::set_nombre(string nom){
    nombre = nom;
}

/**
 * setter correo
 *
 * @param string corr: correo
 * @return
*/
void Asesor::set_correo(string corr){
  correo = corr;
}

/**
 * setter celular
 *
 * @param string cel: celular
 * @return
*/
void Asesor::set_celular(string cel){
  celular = cel;
}

#endif