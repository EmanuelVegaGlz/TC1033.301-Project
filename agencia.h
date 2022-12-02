/*
 * Proyecto final TC1033.
 * Pensamiento Computacional Orientado a objetos.
 * Profesor: Benjamín Valdés Aguirre.
 * Nombre: Emanuel Josué Vega González.
 * ID: A01710366.
 */

/*
 * Esta es la clase agencia, en donde se implementa la agregacion. 
 * De la clase suv, sedan y hatchback,hay un areglo por cada clase de dos 
 * posiciones como atributo de la clase agencia, en donde en la primera
 * posicion se almacena los carros que estan en agencia 
 * (solo hay un carro de cada clase) y en la segunda posicion los carros
 * que personaliza el cliente.
 */

#include <string>
#include "auto.h"
#include "asesor.h"
using namespace std;

//Declaracion de clase Agencia, que es la clase donde se implementa la agregacion
class Agencia{

private:

  //Atriubutos de la clase
  Asesor empleado;
  string ubicacion, nombre;
  Suv lista_camionetas[2];
  Sedan lista_sedanes[2];
  Hatchback lista_hatch[2];

public:

  /**
  * Constructor por default
  *
  * @param
  * @return Objeto Agencia
  */
  Agencia(): ubicacion(""), nombre(""){};

  /**
  * Constructor donde recibe valores para llenar las variables de instancia
  *
  * @param string ubi: ubicacion de la agencia, string nom: nombre de la agencia,
  * Asesor em: asesor de la agencia
  * @return Objeto Agencia
  */
  Agencia(string ubi, string nom, Asesor em):
  ubicacion(ubi), nombre(nom),empleado(em){};

  //Metodos de la clase
  string get_ubicacion();
  string get_nombre();
  Suv get_suv_stock();
  Sedan get_sedan_stock();
  Hatchback get_hatchback_stock();
  Asesor get_asesor();
  
  void set_ubicacion(string );
  void set_nombre(string );
  void agrega_suv(Suv );
  void agrega_sedan(Sedan );
  void agrega_hatchback(Hatchback );
  void agrega_stock_suv(Suv );
  void agrega_stock_sedan(Sedan );
  void agrega_stock_hatchback(Hatchback );
  void agrega_empleado(Asesor );

};

//Getters

/**
 * getter ubicacion
 *
 * @param
 * @return string: ubicacion
*/
string Agencia::get_ubicacion(){
  return ubicacion;
}

/**
 * getter nombre
 *
 * @param
 * @return string: nombre de la agencia
*/
string Agencia::get_nombre(){
  return nombre;
}

/**
 * getter suv en sock
 *
 * @param
 * @return Suv: camionetas en stock
*/
Suv Agencia::get_suv_stock(){
  return lista_camionetas[0];
}

/**
 * getter sedanes en stock
 *
 * @param
 * @return Sedan: sedanes en stock
*/
Sedan Agencia::get_sedan_stock(){
  return lista_sedanes[0];
}

/**
 * getter hatchback en stock
 *
 * @param
 * @return Hatchback: hatchback en stock
*/
Hatchback Agencia::get_hatchback_stock(){
  return lista_hatch[0];
}

/**
 * getter asesor
 *
 * @param
 * @return Asesor: asesor de la agencia
*/
Asesor Agencia::get_asesor(){
  return empleado;
}

//Setters

/**
 * setter ubicacion
 *
 * @param string ubi: ubicacion de la agencia
 * @return
*/
void Agencia::set_ubicacion(string ubi){
  ubicacion = ubi;
}

/**
 * setter nombre
 *
 * @param string nom: nombre de la agencia
 * @return
*/
void Agencia::set_nombre(string nom){
    nombre = nom;
}

//Metodos de agregacion

/**
 * agrega suv
 *
 * @param Suv a: suv configurada por el usuario
 * @return
*/
void Agencia::agrega_suv(Suv a){
    lista_camionetas[1] = a;
}

/**
 * agrega sedan
 *
 * @param Sedan a: Sedan configurada por el usuario
 * @return
*/
void Agencia::agrega_sedan(Sedan a){
  lista_sedanes[1] = a;
}

/**
 * agrega hatchback
 *
 * @param Hatchback a: hatchback configurada por el usuario
 * @return
*/
void Agencia::agrega_hatchback(Hatchback a){
  lista_hatch[1] = a;
}

/**
 * agrega suv en stock
 *
 * @param Suv a: suv en stock
 * @return
*/
void Agencia::agrega_stock_suv(Suv a){
    lista_camionetas[0] = a;
}

/**
 * agrega sedan en stock
 *
 * @param Seda a: sedan en stock
 * @return
*/
void Agencia::agrega_stock_sedan(Sedan a){
    lista_sedanes[0] = a;
}

/**
 * agrega hatchback en stock
 *
 * @param Hatchback a: hatchback en stock
 * @return
*/
void Agencia::agrega_stock_hatchback(Hatchback a){
    lista_hatch[0] = a;
}

/**
 * agrega empleado
 *
 * @param Asesor a: Asesor de la agencia
 * @return
*/
void Agencia::agrega_empleado(Asesor a){
    empleado = a;
}