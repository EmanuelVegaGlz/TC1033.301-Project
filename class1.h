// Clase Auto

#include<string>
using namespace std;

class Auto{

protected:
  string marca, modelo, color;
  float precio;
  int year, potencia;
  int transmision;
  

public:
  Auto(): marca(""), modelo(""), color(""), precio(0.0), 
    year(0), potencia(0), transmision(0){};
  
  Auto(string mar, string mod, string col, float pre, int yr, int pot, int tra): 
    marca(mar), modelo(mod), color(col), precio(pre),
    year(yr), potencia(pot), transmision(tra){};

  string get_marca();
  string get_modelo();
  string get_color();
  int get_year();
  int get_potencia();
  string get_transmision();

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

protected:
    bool awd;
    bool offroad;
public:
    Suv():Auto(){
      awd = 0;
      offroad = 0;
    }
    Suv(string mar, string mod, string col, float pre, int yr, int pot, int tra, bool a, bool off):
      Auto(mar,mod,col,pre,yr,pot,tra){
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
      a = awd;
    }
    void set_offroad(bool o){
      o = offroad;
    }
};

//Clase Sedan

class Sedan: public Auto{

protected:
    bool convertible;
    int tamanio_llantas;

public:
    Sedan():Auto(){
      convertible = 0;
      tamanio_llantas = 0;
      }
    Sedan(string mar, string mod, string col, float pre, int yr, int pot, int tra, bool c, int tl):
      Auto(mar,mod,col,pre,yr,pot,tra){
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
      c = convertible;
    }
    void set_tamanio(int t){
      t = tamanio_llantas;
    }
};

//Clase Hatchback

class Hatchback: public Auto{

protected:
    int numero_puertas;
    float capacidad_cajuela;

public:
    Hatchback():Auto(){
      numero_puertas = 0;
      capacidad_cajuela = 0;
    }
    Hatchback(string mar, string mod, string col, float pre, int yr, int pot, int tra, int np, float cc):
      Auto(mar,mod,col,pre,yr,pot,tra){
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
      p = numero_puertas;
    }
    void set_capacidad(float c){
      c = capacidad_cajuela;
    }
};
