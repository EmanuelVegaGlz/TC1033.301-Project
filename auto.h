/*
 * Proyecto final TC1033.
 * Pensamiento Computacional Orientado a objetos.
 * Profesor: Benjamín Valdés Aguirre.
 * Nombre: Emanuel Josué Vega González.
 * ID: A01710366.
 */

/*
 * Clase Auto que contiene los métodos genéricos para las clases hijas
 * Suv, Sedan y Hatchback.
 */

#ifndef AUTO_H_
#define AUTO_H_

#include<string>
using namespace std;

//Declaracion de clase auto, que es la clase padre
class Auto{

private:

  //Atriubutos de la clase
  string marca, modelo, color;
  float precio;
  int year, potencia;
  int transmision;
  string tipo;

public:

  //Metodos de la clase
  string get_marca();
  string get_modelo();
  string get_color();
  int get_year();
  int get_potencia();
  string get_transmision();
  string get_tipo();
  float get_precio();

  void set_marca(string );
  void set_modelo(string );
  void set_color(string );
  void set_year(int );
  void set_potencia(int );
  void set_transmision(int );

  float calcula_precio();

  /**
  * Constructor por default
  *
  * @param
  * @return Objeto Auto
  */
  Auto(): marca(""), modelo(""), color(""), precio(0.0), 
    year(0), potencia(0), transmision(0), tipo(""){};
  
  /**
  * Constructor donde recibe valores para llenar las variables de instancia
  *
  * @param string string mar: Marca del auto, string mod: Modelo del auto, 
  * string col: Color del auto, float pre: precio del auto, int yr: año del auto,
  * int pot: potencia del auto, int tra: Tipo de transmision, string tip: tipo de auto
  * @return Objeto Auto
  */
  Auto(string mar, string mod, string col, float pre, int yr, int pot, int tra,string tip): 
    marca(mar), modelo(mod), color(col), precio(pre),
    year(yr), potencia(pot), transmision(tra),tipo(tip){};
  Auto(string tip):tipo(tip){};


};

//Getters

/**
 * getter marca
 *
 * @param
 * @return string: marca del auto
*/
string Auto::get_marca(){
  return marca;
}

/**
 * getter modelo
 *
 * @param
 * @return string: modelo del auto
*/
string Auto::get_modelo(){
  return modelo;
}

/**
 * getter color
 *
 * @param
 * @return string: color del auto
*/
string Auto::get_color(){
  return color;
}

/**
 * getter year
 *
 * @param
 * @return int: año del auto
*/
int Auto::get_year(){
  return year;
}

/**
 * getter potencia
 *
 * @param
 * @return int: potencia del auto
*/
int Auto::get_potencia(){
  return potencia;
}

/**
 * getter transmision
 *
 * @param
 * @return string: transmision del auto
*/
string Auto::get_transmision(){
  if(transmision == 0)
    return "Automatico";
  else
    return "Manual";
}

/**
 * getter tipo
 *
 * @param
 * @return string: tipo de auto
*/
string Auto::get_tipo(){
    return tipo;
}

/**
 * getter precio
 *
 * @param
 * @return float: precio del auto
*/
float Auto::get_precio(){
    return precio;
}

//Setters

/**
 * setter marca
 *
 * @param string mar: marca que se le establece al objeto
 * @return
*/
void Auto::set_marca(string mar){
    marca = mar;
}

/**
 * setter modelo
 *
 * @param string mod: modelo que se le establece al objeto
 * @return
*/
void Auto::set_modelo(string mod){
    modelo = mod;
}

/**
 * setter color
 *
 * @param string col: color que se le establece al objeto
 * @return
*/
void Auto::set_color(string col){
    color = col;
}

/**
 * setter marca
 *
 * @param int yr: año que se le establece al objeto
 * @return
*/
void Auto::set_year(int yr){
    year = yr;
}

/**
 * setter potencia
 *
 * @param string pot: potencia que se le establece al objeto
 * @return
*/
void Auto::set_potencia(int pot){
    potencia = pot;
}

/**
 * setter transmision
 *
 * @param string tran: transmision que se le establece al objeto
 * @return
*/
void Auto::set_transmision(int tran){
    transmision = tran;
}


/**
 * Calcula el precio del auto en base al año
 *
 * @param
 * @return float: precio del auto
*/
float Auto::calcula_precio(){
    if (year == 2022)
      return 500000.0;
    else
      if (2010 <= year && year < 2022)
        return 200000.0;
      else
        return 100000.0;
}

//Declaracion de clase Suv, que hereda de la clase Auto
class Suv: public Auto{

private:

    //Atriubutos de la clase
    bool awd;
    bool offroad;

public:

    /**
    * Constructor por default
    *
    * @param
    * @return Objeto Suv
    */
    Suv():Auto("SUV"){
      awd = 0;
      offroad = 0;
    }

    /**
    * Constructor donde recibe valores para llenar las variables de instancia
    *
    * @param string string mar: Marca del auto, string mod: Modelo del auto, 
    * string col: Color del auto, float pre: precio del auto, int yr: año del auto,
    * int pot: potencia del auto, int tra: Tipo de transmision, bool a: all wheel drive, 
    * bool off: llantas todo terreno, string tip: tipo de auto
    * @return Objeto Auto
    */
    Suv(string mar, string mod, string col, float pre, int yr, int pot, int tra, bool a, bool off, string tip):
      Auto(mar,mod,col,pre,yr,pot,tra,tip){
        awd = a;
        offroad = off;
      }

    //Metodos de la clase

    //Getters
    
    /**
     * getter awd
     *
     * @param
     * @return bool: si tiene o no all wheel drive
    */
    bool get_awd(){
      return awd;
    }

    /**
     * getter offroad
     *
     * @param
     * @return bool: si tiene o no llantas todo terreno
    */
    bool get_offroad(){
      return offroad;
    }
    
    //Setters

    /**
     * setter awd
     *
     * @param bool a: awd
     * @return 
    */
    void set_awd(bool a){
      awd = a;
    }

    /**
     * setter offroad
     *
     * @param bool o: offroad
     * @return 
    */
    void set_offroad(bool o){
      offroad = o;
    }
};

//Declaracion de clase Sedan, que hereda de la clase Auto
class Sedan: public Auto{

private:

    //Atributos de las clases
    bool convertible;
    int tamanio_llantas;

public:

    /**
    * Constructor por default
    *
    * @param
    * @return Objeto Sedan
    */
    Sedan():Auto("Sedan"){
      convertible = 0;
      tamanio_llantas = 0;
      }

    /**
    * Constructor donde recibe valores para llenar las variables de instancia
    *
    * @param string string mar: Marca del auto, string mod: Modelo del auto, 
    * string col: Color del auto, float pre: precio del auto, int yr: año del auto,
    * int pot: potencia del auto, int tra: Tipo de transmision, bool c: convertible, 
    * int tl: tamaño de las llantes, string tip: tipo de auto
    * @return Objeto Auto
    */
    Sedan(string mar, string mod, string col, float pre, int yr, int pot, int tra, bool c, int tl,string tip):
      Auto(mar,mod,col,pre,yr,pot,tra,tip){
        convertible = c;
        tamanio_llantas = tl;
      }

    //Metodos de la clase

    //Getters
    
    /**
     * getter convertible
     *
     * @param
     * @return bool: si es o no convertible
    */
    bool get_convertible(){
      return convertible;
    }

    /**
     * getter tamanio
     *
     * @param
     * @return int: tamaño de las llantas
    */
    int get_tamanio(){
      return tamanio_llantas;
    }

    //Setters

    /**
     * setter convertible
     *
     * @param bool c: convertible
     * @return 
    */
    void set_convertible(bool c){
      convertible = c;
    }

    /**
     * setter tamanio
     *
     * @param int t: tamaño de las llantas
     * @return 
    */
    void set_tamanio(int t){
      tamanio_llantas = t;
    }
};

//Declaracion de clase Hatchback, que hereda de la clase Auto
class Hatchback: public Auto{

private:

    //Atributos de las clases
    int numero_puertas;
    float capacidad_cajuela;

public:

    /**
    * Constructor por default
    *
    * @param
    * @return Objeto Hatchback
    */
    Hatchback():Auto("Hatchback"){
      numero_puertas = 0;
      capacidad_cajuela = 0;
    }

    /**
    * Constructor donde recibe valores para llenar las variables de instancia
    *
    * @param string string mar: Marca del auto, string mod: Modelo del auto, 
    * string col: Color del auto, float pre: precio del auto, int yr: año del auto,
    * int pot: potencia del auto, int tra: Tipo de transmision, int np: numero de puertas, 
    * float cc: capacidad de la cajuela en litros, string tip: tipo de auto
    * @return Objeto Auto
    */
    Hatchback(string mar, string mod, string col, float pre, int yr, int pot, int tra, int np, float cc, string tip):
      Auto(mar,mod,col,pre,yr,pot,tra,tip){
        numero_puertas = np;
        capacidad_cajuela = cc;
      }

    //Getters
    
    /**
     * getter puertas
     *
     * @param
     * @return int: numero de puertas
    */
    int get_puertas(){
      return numero_puertas;
    }

    /**
     * getter capacidad
     *
     * @param
     * @return float: capacidad de la cajuela en litros
    */
    float get_capacidad(){
      return capacidad_cajuela;
    }
  
    //Setters

    /**
     * setter puertas
     *
     * @param int p: numero de puertas
     * @return 
    */
    void set_puertas(int p){
      numero_puertas = p;
    }

    /**
     * setter capacidad
     *
     * @param float c: capacidad de la cajuela en litros
     * @return 
    */
    void set_capacidad(float c){
      capacidad_cajuela = c;
    }
};

#endif