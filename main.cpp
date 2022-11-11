//Programa de importacion de autos

#include <iostream>
#include <string>
#include "class1.h"
#include "class2.h"
#include "class3.h"

using namespace std;

int main(){
    Auto coche1;
    coche1.set_marca("BMW");
    coche1.set_modelo("M4");
    coche1.set_year(2022);
    coche1.set_color("Azul");
    float price = calcula_precio();

    cout << "Su pedido: " << endl;
    cout << coche1.get_marca() << endl;
    cout << coche1.get_modelo() << endl;
    cout << coche1.get_year() << endl;
    cout << coche1.get_color() << endl;
    cout << price << endl;

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

    string agencia_selec;

    switch (opcion)
    {
    case 1:
        agencia_selec = dealer1.get_nombre() + dealer1.get_ubicacion();
        cout << "Agencia seleccionada con exito" << endl;
        break;
    case 2:
        agencia_selec = dealer2.get_nombre() + dealer2.get_ubicacion();
        cout << "Agencia seleccionada con exito" << endl;
    default:
        cout << "Sucursal no encontrada";
        break;
    }

    Asesor empleado1;

    empleado1.set_nombre("Julian");
    empleado1.set_celular("55 8899 0001");
    empleado1.set_correo("julian@importacionescpp.com");

    cout << "Su asesor designado es: " << empleado1.nombre() << endl;
    cout << "Puede contactarlo mediante los siguiente medios:" << endl;
    cout << "Celular: " << empleado1.get_celular << endl;
    cout << "E-mail: " << empleado1.get_correo << endl;

    string mail_cliente;
    cout << "Por favor dejenos su email para ponernos en contacto: ";
    cin << mail_cliente;
    cout << "Le enviaermos la informacion pertinente para darle continuidad"

    cout << "Gracias por la confianza y dejarnos importar tus sueños"

    cout << "       ──▄▄▐▀▀▀▀▀▀▀▀▀▀▀▌▄▄──  " << endl;
    cout << "       ─▄▄▄█▄▄▄▄▄▄▄▄▄▄▄█▄▄▄─  " << endl;
    cout << "       ─█▄█░░█▓█▓█▓█▓█░░█▄█▌  " << endl;
    cout << "       ─▓▓█▀███████████▀█▓▓── " << endl;
    cout << "       ─▓▓▀▀───────────▀▀▓▓── " << endl;

}

  
