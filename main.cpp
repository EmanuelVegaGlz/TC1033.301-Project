//Programa de importacion de autos

#include <iostream>
#include <string>
#include "class1.h"
#include "class2.h"
#include "class3.h"

using namespace std;

int main(){
    
     cout << "Que tipo de vehiculo le interesa: " << "\n"
         << "1 SUV" << "\n"
         << "2 Sedan" << "\n"
         << "3 Hatchback" << "\n"
         << "Escriba el numero deseado: " << "\n";

     int eleccion;

     cin >> eleccion;

     Auto coche1;
     if(eleccion == 1)
          Suv coche1;
     else
          if(eleccion == 2)
               Sedan coche1;
                         
          else
               Hatchback coche1;
     
     cout << coche1.get_tipo() << endl;
     string marc;
     cout << "Que marca le gustaria que fuera su auto: ";
     cin >> marc;
     coche1.set_marca(marc);

     string model;
     cout << endl << "Escriba el modelo: ";
     cin >> model;
     coche1.set_modelo(model);

     string col;
     cout << endl << "En que color lo desea: ";
     cin >> col;
     coche1.set_color(col);

     int yr;
     cout << endl << "Digite el anio: ";
     cin >> yr;
     coche1.set_year(yr);

     int hp;
     cout << endl << "Cuantos caballos de fuerza quiere: ";
     cin >> hp;
     coche1.set_potencia(hp);

     int trans;
     cout << endl << "Hablando de la transmision" << endl
          << " * Para automatico escriba 0" << endl 
          << " * Para manual cualquier otro numero entero" << endl
          << "Escriba la opcion deseada: ";
     cin >> trans;
     coche1.set_transmision(trans);

     float price = coche1.calcula_precio();

     cout << endl << "Su pedido: " << endl
          << "Marca: " << coche1.get_marca() << endl
          << "Modelo: " << coche1.get_modelo() << endl
          << "Color: " << coche1.get_color() << endl
          << "Anio: " << coche1.get_year() << endl
          << "Caballos de fuerza: " << coche1.get_potencia() << endl
          << "Transmision: " << coche1.get_transmision() << endl
          << "Precio: " << price << endl
          << endl;

     Agencia dealer1 ("Santiago de Queretaro", "Queretacars");
     Agencia dealer2;

     dealer2.set_ubicacion("El Marques");
     dealer2.set_nombre("Motor Power");

     int opcion;
     cout << "Estas son nuestras agencias:" << endl;
     cout << dealer1.get_nombre() << "," << dealer1.get_ubicacion() << endl;
     cout << dealer2.get_nombre() << "," << dealer2.get_ubicacion() << endl;
     cout << "En que agencia desea recogerlo, escribe 1 o 2:";
     cin >> opcion;
     cout << endl;

     string agencia_selec;

     switch (opcion)
     {
     case 1:
          agencia_selec = dealer1.get_nombre() + "," + dealer1.get_ubicacion();
          cout << "Agencia seleccionada con exito" << endl;
          break;
     case 2:
          agencia_selec = dealer2.get_nombre() + "," + dealer2.get_ubicacion();
          cout << "Agencia seleccionada con exito" << endl;
          break;
     default:
          cout << "Sucursal no encontrada";
     }

     cout << endl;

     Asesor empleado1;

     empleado1.set_nombre("Julian");
     empleado1.set_celular("55 8899 0001");
     empleado1.set_correo("julian@importacionescpp.com");

     cout << "Su asesor designado es: " << empleado1.get_nombre() << endl
          << "Puede contactarlo mediante los siguiente medios:" << endl
          << "Celular: " << empleado1.get_celular() << endl
          << "E-mail: " << empleado1.get_correo() << endl
          << "Se encuentre en la sucursal: " << agencia_selec << endl << endl;

     string mail_cliente;
     cout << "Por favor dejenos su email para ponernos en contacto: ";
     cin >> mail_cliente;
     cout << endl << "Le enviaermos la informacion a este correo " 
          << mail_cliente << " para darle continuidad" << endl << endl;

     cout << "Gracias por la confianza y dejarnos importar tus autos" <<endl;


     cout << "     ______        " << endl
          << "    /|_||_ `.__    " << endl
          << "   (   _    _ _|   " << endl
          << "   =`-(_)--(_)-'   " << endl;
          
     return 0;
}

  
