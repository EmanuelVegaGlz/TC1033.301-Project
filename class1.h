// Clase Auto

#include<string>
using namespace std;

class Auto{

private:
  string marca, modelo, color;
  float precio;
  int year;

public:
  Auto();
  Auto(string mar, int yr, string mod, string col): marca(mar), modelo(mod), year(yr), color(col){};

  string get_marca();
  string get_modelo();
  int get_year();
  string get_color();

  void set_marca(string );
  void set_modelo(string );
  void set_year(int );
  void set_color(string );

  float calcula_precio();

};


string Auto::get_marca(){
  return marca;
}

string Auto::get_modelo(){
  return modelo;
}

int Auto::get_year(){
    return year;
}

string Auto::get_color(){
  return color;
}

void Auto::set_marca(string mar){
  marca = mar;
}

void Auto::set_modelo(string mod){
    modelo = mod;
}

void Auto::set_year(int yr){
    year = yr;
}

void Auto::set_color(string col){
    color = col;
}

float Auto::calcula_precio(){
    if (year == 2022 && marca == "BMW")
      return 500000.0;
    else
      if (2010 <= year && year < 2022)
        return 200000.0;
      else
        return 100000.0;
}