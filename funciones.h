/*
 * Proyecto final TC1033.
 * Pensamiento Computacional Orientado a objetos.
 * Profesor: Benjamín Valdés Aguirre.
 * Nombre: Emanuel Josué Vega González.
 * ID: A01710366.
 * 02/12/2022
 */

/*
 * Archivo que contiene funciones
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * Funcion para imprimir las caracteristicas del auto
 *
 * @param string mensaje: mensaje inicial, Auto coche1: objeto al cual se 
 * le desean imprimir su caracteristica
 * @return
*/
void imprime_caracteristicas(string mensaje, Auto coche1)
{
     cout << endl << mensaje << endl
          << "Marca: " << coche1.get_marca() << endl
          << "Tipo: " << coche1.get_tipo() << endl
          << "Modelo: " << coche1.get_modelo() << endl
          << "Color: " << coche1.get_color() << endl
          << "Anio: " << coche1.get_year() << endl
          << "Caballos de fuerza: " << coche1.get_potencia() << endl
          << "Transmision: " << coche1.get_transmision() << endl
          << "Precio: " << coche1.get_precio() << " MXN" << endl;
}

/**
 * Funcion para imprimir los datos de contacto del asesor de la agencia
 *
 * @param Asesor empleado1: asesor que se quiere conocer sus datos de contacto
 * @return
*/
void imprime_asesor(Asesor empleado1)
{
     cout << "El asesor de la sucursal es: " << empleado1.get_nombre() << endl
               << "Puede contactarlo mediante los siguiente medios:" << endl
               << "Celular: " << empleado1.get_celular() << endl
               << "E-mail: " << empleado1.get_correo() << endl << endl;
}

/**
 * Funcion para configurar las caracteristicas de una suv
 *
 * @param
 * @return Suv: coche1
*/
Suv configura_suv(){
     Suv coche1;
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
     cout << endl << "Digite el anio (Numero): ";
     cin >> yr;
     coche1.set_year(yr);

     int hp;
     cout << endl << "Cuantos caballos de fuerza quiere(Numero): ";
     cin >> hp;
     coche1.set_potencia(hp);

     int trans;
     cout << endl << "Hablando de la transmision" << endl
          << " * Para automatico escriba 0" << endl 
          << " * Para manual cualquier otro numero entero" << endl
          << "Escriba la opcion deseada (Numero): ";
     cin >> trans;
     coche1.set_transmision(trans);

     bool awd;
     cout << endl << "Desea que tenga awd" << endl
          << " * No escriba 0" << endl 
          << " * Si escriba 1" << endl
          << "Escriba la opcion deseada (Numero): ";
     cin >> awd;
     coche1.set_awd(awd);

     bool offroad;
     cout << endl << "Desea llantas todo terreno:" << endl
          << " * No escriba 0" << endl 
          << " * Si escriba 1" << endl
          << "Escriba la opcion deseada (Numero): ";
     cin >> offroad;
     coche1.set_offroad(offroad);

     coche1.calcula_precio();

     imprime_caracteristicas("Su pedido: ", coche1);

     cout << "Awd: " << coche1.get_awd() << endl
          << "Llantas offroad: " << coche1.get_offroad() << endl << endl;
     
     return coche1;
}

/**
 * Funcion para configurar las caracteristicas de un sedan
 *
 * @param
 * @return Sedan: coche1
*/
Sedan configura_sedan(){
    Sedan coche1;
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
     cout << endl << "Digite el anio (Numero): ";
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
          << "Escriba la opcion deseada (Numero): ";
     cin >> trans;
     coche1.set_transmision(trans);

     bool convertible;
     cout << endl << "Desea que sea convertible" << endl
          << " * No escriba 0" << endl 
          << " * Si escriba 1" << endl
          << "Escriba la opcion deseada (Numero): ";
     cin >> convertible;
     coche1.set_convertible(convertible);

     int tamanio;
     cout << endl << "Ingrese el tamanio del rin en pulgadas:" << endl
          << "Escriba la opcion deseada (Numero): ";
     cin >> tamanio;
     coche1.set_tamanio(tamanio);

     coche1.calcula_precio();
     imprime_caracteristicas("Su pedido: ", coche1);

     cout << "Convertible: " << coche1.get_convertible() << endl
          << "Tamanio del rin: " << coche1.get_tamanio() << endl << endl;

     return coche1;
}

/**
 * Funcion para configurar las caracteristicas de un hatchback
 *
 * @param
 * @return Hatchback: coche1
*/
Hatchback configura_hatchback(){
    Hatchback coche1;
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
     cout << endl << "Digite el anio (Numero): ";
     cin >> yr;
     coche1.set_year(yr);

     int hp;
     cout << endl << "Cuantos caballos de fuerza quiere (Numero): ";
     cin >> hp;
     coche1.set_potencia(hp);

     int trans;
     cout << endl << "Hablando de la transmision" << endl
          << " * Para automatico escriba 0" << endl 
          << " * Para manual cualquier otro numero entero" << endl
          << "Escriba la opcion deseada (numero): ";
     cin >> trans;
     coche1.set_transmision(trans);

     int numero_de_puertas;
     cout << endl << "Cuantas puertas desea su sedan," << endl
          << " * 3 o 5 puertas" << endl 
          << "Escriba 3 o 5 (Numero): ";
     cin >> numero_de_puertas;
     coche1.set_puertas(numero_de_puertas);

     float capacidad;
     cout << endl << "De que capacidad le gustaria su cajuela: " << endl
          << "Ejemplo 250L, 300L, 500L"
          << "Escriba la opcion deseada (Solo numero): ";
     cin >> capacidad;
     coche1.set_capacidad(capacidad);

     coche1.calcula_precio();

     imprime_caracteristicas("Su pedido: ", coche1);
     cout << "Numero de puertas: " << coche1.get_puertas() << endl
          << "Capacidad de la cajuela en L: " << coche1.get_capacidad() << endl << endl;
     

    return coche1;
}