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
          << "Tipo: " << coche1.get_tipo() << endl
          << "Modelo: " << coche1.get_modelo() << endl
          << "Color: " << coche1.get_color() << endl
          << "Anio: " << coche1.get_year() << endl
          << "Caballos de fuerza: " << coche1.get_potencia() << endl
          << "Transmision: " << coche1.get_transmision() << endl
          << "Precio: " << price << endl
          << endl;
    return coche1;
}

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
          << "Tipo: " << coche1.get_tipo() << endl
          << "Modelo: " << coche1.get_modelo() << endl
          << "Color: " << coche1.get_color() << endl
          << "Anio: " << coche1.get_year() << endl
          << "Caballos de fuerza: " << coche1.get_potencia() << endl
          << "Transmision: " << coche1.get_transmision() << endl
          << "Precio: " << price << endl
          << endl;
    return coche1;
}

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
          << "Tipo: " << coche1.get_tipo() << endl
          << "Modelo: " << coche1.get_modelo() << endl
          << "Color: " << coche1.get_color() << endl
          << "Anio: " << coche1.get_year() << endl
          << "Caballos de fuerza: " << coche1.get_potencia() << endl
          << "Transmision: " << coche1.get_transmision() << endl
          << "Precio: " << price << endl
          << endl;
    return coche1;
}