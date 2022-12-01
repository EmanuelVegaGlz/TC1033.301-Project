//Programa de importacion de autos

#include <iostream>
#include <string>
#include "auto.h"
#include "agencia.h"
#include "asesor.h"
#include "funciones.h"

using namespace std;


int main(){
    
     cout << "Que tipo de vehiculo le interesa: " << "\n"
         << "1 SUV" << "\n"
         << "2 Sedan" << "\n"
         << "3 Hatchback" << "\n"
         << "Escriba el numero deseado: " << "\n";

     int eleccion;

     cin >> eleccion;

     if(eleccion == 1)
          Suv camioneta = configura_suv();

     else
          if(eleccion == 2)
          Sedan sedan = configura_sedan();
                         
          else
               Hatchback hatch = configura_hatchback();
     
     
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