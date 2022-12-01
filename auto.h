// Clase Auto

#ifndef AUTO_H_
#define AUTO_H_

#include<string>
using namespace std;

class Auto{

private:
  string marca, modelo, color;
  float precio;
  int year, potencia;
  int transmision;
  string tipo;
  

public:
  Auto(): marca(""), modelo(""), color(""), precio(0.0), 
    year(0), potencia(0), transmision(0), tipo(""){};
  
  Auto(string mar, string mod, string col, float pre, int yr, int pot, int tra,string tip): 
    marca(mar), modelo(mod), color(col), precio(pre),
    year(yr), potencia(pot), transmision(tra),tipo(tip){};
  Auto(string tip):tipo(tip){};

  string get_marca();
  string get_modelo();
  string get_color();
  int get_year();
  int get_potencia();
  string get_transmision();
  string get_tipo();

  void set_marca(string );
  void set_modelo(string );
  void set_color(string );
  void set_year(int );
  void set_potencia(int );
  void set_transmision(int );

  float calcula_precio();

};

//Getters

string Auto::get_marca(){
  return marca;
}

string Auto::get_modelo(){
  return modelo;
}

string Auto::get_color(){
  return color;
}

int Auto::get_year(){
    return year;
}

int Auto::get_potencia(){
    return potencia;
}

string Auto::get_transmision(){
    if(transmision == 0)
      return "Automatico";
    else
      return "Manual";
}

string Auto::get_tipo(){
      return tipo;
    }

//Setters

void Auto::set_marca(string mar){
  marca = mar;
}

void Auto::set_modelo(string mod){
    modelo = mod;
}

void Auto::set_color(string col){
    color = col;
}

void Auto::set_year(int yr){
    year = yr;
}

void Auto::set_potencia(int pot){
    potencia = pot;
}

void Auto::set_transmision(int tran){
    transmision = tran;
}


//Calcular el precio

float Auto::calcula_precio(){
    if (year == 2022 && marca == "BMW")
      return 500000.0;
    else
      if (2010 <= year && year < 2022)
        return 200000.0;
      else
        return 100000.0;
}

//Clase Suv

class Suv: public Auto{

private:
    bool awd;
    bool offroad;
public:
    Suv():Auto("SUV"){
      awd = 0;
      offroad = 0;
    }
    Suv(string mar, string mod, string col, float pre, int yr, int pot, int tra, bool a, bool off, string tip):
      Auto(mar,mod,col,pre,yr,pot,tra,tip){
        awd = a;
        offroad = off;
      }

    bool get_awd(){
      return awd;
    }

    bool get_offroad(){
      return offroad;
    }
    
    void set_awd(bool a){
      awd = a;
    }
    void set_offroad(bool o){
      offroad = o;
    }
};

//Clase Sedan

class Sedan: public Auto{

private:
    bool convertible;
    int tamanio_llantas;

public:
    Sedan():Auto("Sedan"){
      convertible = 0;
      tamanio_llantas = 0;
      }
    Sedan(string mar, string mod, string col, float pre, int yr, int pot, int tra, bool c, int tl,string tip):
      Auto(mar,mod,col,pre,yr,pot,tra,tip){
        convertible = c;
        tamanio_llantas = tl;
      }

    bool get_convertible(){
      return convertible;
    }

    int get_tamanio(){
      return tamanio_llantas;
    }
    
    void set_convertible(bool c){
      convertible = c;
    }
    void set_tamanio(int t){
      tamanio_llantas = t;
    }
};

//Clase Hatchback

class Hatchback: public Auto{

private:
    int numero_puertas;
    float capacidad_cajuela;

public:
    Hatchback():Auto("Hatchback"){
      numero_puertas = 0;
      capacidad_cajuela = 0;
    }
    Hatchback(string mar, string mod, string col, float pre, int yr, int pot, int tra, int np, float cc, string tip):
      Auto(mar,mod,col,pre,yr,pot,tra,tip){
        numero_puertas = np;
        capacidad_cajuela = cc;
      }

    int get_puertas(){
      return numero_puertas;
    }

    float get_capacidad(){
      return capacidad_cajuela;
    }
    
    void set_puertas(int p){
      numero_puertas = p;
    }
    void set_capacidad(float c){
      capacidad_cajuela = c;
    }
};

#endif