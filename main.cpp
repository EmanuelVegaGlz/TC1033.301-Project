/*
 * Proyecto final TC1033.
 * Pensamiento Computacional Orientado a objetos.
 * Profesor: Benjamín Valdés Aguirre.
 * Nombre: Emanuel Josué Vega González.
 * ID: A01710366.
 * 02/12/2022
 */

/*
 * El programa esta pensado para una agencia, en donde el usuario
 * puede elegir entre los autos que ya hay en la agencia, o hacer un pedido
 * con un auto que van personalizando.
 */

//Bibliotecas
#include <iostream>      // Para entradas y salidas
#include <string>        // Tipo de dato string
#include "auto.h"        // Clase para instanciar autos
#include "agencia.h"     // Clase donde se implementa la agregacionde
#include "asesor.h"      // Clase para instanciar asesores
#include "funciones.h"   // Archivo con funciones.

using namespace std;


int main(){
     
     // Instanciacion de un empleado
     Asesor empleado1;

     // Estableciendo los atributos mediante setters
     empleado1.set_nombre("Julian");
     empleado1.set_celular("55 8899 0001");
     empleado1.set_correo("julian@importacionescpp.com");
     
     // Creando objeto Agencia, Objeto asesor como parámetro (agregación)
     Agencia dealer1("Santiago de Queretaro", "Queretacars", empleado1);

     // Objeto de la clase agencia, estableciendo los atributos mediante setters 
     Agencia dealer2;
     dealer2.set_ubicacion("El Marques");
     dealer2.set_nombre("Motor Power");

     // empleado2, objeto de la clase asesor
     Asesor empleado2;
     empleado2.set_nombre("Francisco");
     empleado2.set_celular("55 3367 8888");
     empleado2.set_correo("paco@importacionescpp.com");
     dealer2.agrega_empleado(empleado2); // Agregacion

     // Creacion de objetos que se encuentran en la agencia
     Suv stock_suv("Mazda", "CX-7", "Gris", 159999.99, 2010, 187, 0, false, 
                    true, "SUV");
     dealer1.agrega_stock_suv(stock_suv); // Agregacion
     
     Sedan stock_sedan("BMW", "M3", "Azul", 800000.15, 2021, 350, 0, true,
                         20, "Sedan");
     dealer1.agrega_stock_sedan(stock_sedan); // Agregacion

     Hatchback stock_hatchback ("Kia", "Forte", "Rojo", 300000.50, 2022, 147,
                              1, 5, 450.75, "Hatchback");
     dealer1.agrega_stock_hatchback(stock_hatchback); // Agregacion

     //Geters para obtener datos de los objetos agregados
     Suv suv_en_agencia = dealer1.get_suv_stock();
     Sedan sedan_en_agencia = dealer1.get_sedan_stock();
     Hatchback hatchback_en_agencia = dealer1.get_hatchback_stock();

     cout << "En " << dealer1.get_nombre() << "," << dealer1.get_ubicacion()
          << " " <<"tenemos estos autos disponibels:" << endl;
     
          // Funcion para imprimir, los atributos de los objetos
          imprime_caracteristicas("Suv's:", suv_en_agencia);
          imprime_caracteristicas("Sedanes:", sedan_en_agencia);
          imprime_caracteristicas("Hatchback's", hatchback_en_agencia);
     
     // Imprime mensaje para que el usuario seleccione una opcion del menu
     cout << "Si le interesan los autos disponibles, " 
          << "acerquese a la agencia y con gusto le atenderemos" << endl
          << "O puede personalizar su carro y nosotros lo conseguimos" 
          << endl << endl
          << "Que desea hacer?" << endl
          << "1.- Salir del programa y acudir a la agencia" << endl
          << "2.- Ordenar un auto personalizado" << endl
          << "Escriba su respuesta, unicamente 1 o 2 (Numero): ";

     int salir_o_configurar;
     cin >> salir_o_configurar;
     
     // Condicional para salir del programa o configurar un auto nuevo
     if(salir_o_configurar == 1)
     {
          //Informacion de contacto
          cout << endl << "Si desea ponerse en contacto con un asesor" << endl;
          Asesor contactar_asesor;
          contactar_asesor = dealer1.get_asesor();
          imprime_asesor(contactar_asesor);
          
          //Mensaje de despedida
          cout << "Gracias por la confianza, lo esperamos!!" << endl
               << "     ______        " << endl
               << "    /|_||_ `.__    " << endl
               << "   (   _    _ _|   " << endl
               << "   =`-(_)--(_)-'   " << endl;
     }

     else
     {    
          //Mensaje para elegir que tipo de auto instanciar 
          cout << "Que tipo de vehiculo le interesa: " << "\n"
          << "1 SUV" << "\n"
          << "2 Sedan" << "\n"
          << "3 Hatchback" << "\n"
          << "Escriba el numero deseado: " << "\n";

          int eleccion;

          cin >> eleccion;

          //Switch ara crear el objeto de acuerdo a la eleccion.
          switch(eleccion){

          case 1:
          {
               Suv camioneta;

               //Funcion para que el usuario setee el objeto
               camioneta = configura_suv();       
               dealer1.agrega_suv(camioneta);     //Agregacion
               dealer2.agrega_suv(camioneta);     //Agregacion
               break;
          }

          case 2:
          {
               Sedan sedan;
               //Funcion para que el usuario setee el objeto
               sedan = configura_sedan();
               dealer1.agrega_sedan(sedan);       //Agregacion
               dealer2.agrega_sedan(sedan);       //Agregacion
               break;
          }
          case 3:
          {
               Hatchback hatch;
               //Funcion para que el usuario setee el objeto
               hatch = configura_hatchback();
               dealer1.agrega_hatchback(hatch);   //Agregacion
               dealer2.agrega_hatchback(hatch);   //Agregacion
               break;
          }
          }

          //Menu para seleccionar la agencia
          int opcion;
          cout << "Estas son nuestras agencias:" << endl;
          cout << "1.-" << dealer1.get_nombre() << "," 
          << dealer1.get_ubicacion() << endl;     
          cout << "2.-" << dealer2.get_nombre() << "," 
          << dealer2.get_ubicacion() << endl;
          cout << "En que agencia desea recogerlo, escribe 1 o 2 (Numero):";
          cin >> opcion;
          cout << endl;

          string agencia_selec;

          //Switch para desplegar informacion de contacto con el asesor
          switch (opcion)
          {
          case 1:
               {
               cout << "Agencia seleccionada con exito" << endl << endl;
               Asesor contacto1;
               contacto1 = dealer1.get_asesor();
               imprime_asesor(contacto1);
               }
               break;
               
          case 2:
               {
               cout << "Agencia seleccionada con exito" << endl << endl;
               Asesor contacto2;
               contacto2 = dealer2.get_asesor();
               imprime_asesor(contacto2);
               }
               break;

          default:
               cout << "Sucursal no encontrada";
          }

          cout << endl;


          //Obtencion del correo del cliente para "enviarle la informacion"
          string mail_cliente;
          cout << "Por favor dejenos su email para ponernos en contacto: ";
          cin >> mail_cliente;
          cout << endl << "Le enviaermos la informacion a este correo " 
               << mail_cliente << " para darle continuidad" << endl << endl;

          //Mensaje de despedida
          cout << "Gracias por la confianza y dejarnos importar tus autos" <<endl;


          cout << "     ______        " << endl
               << "    /|_||_ `.__    " << endl
               << "   (   _    _ _|   " << endl
               << "   =`-(_)--(_)-'   " << endl;
     }
     return 0;
}