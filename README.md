# Agencia de autos.
#### TC1033.301-Project
#### Nombre: Emanuel Vega
#### ID: A01710366

## Contexto

El problema a resolver es crear un programa para una agencia de autos la cual se dedica a importar y conseguir vehículos para sus clientes, en donde se tienen 3 factores o clases principales; la agencia, vehículo y vendedor. La agencia ya cuenta con 3 autos, una suv, un sedán y un hatchback. En un inicio se muestran estos objetos instanciados previamente con su respectivas características y precio. Se le da la opción al usuario de comprar uno de los que se encuentran creados acudiendo directamente a la agencia, o personalizar un auto con ciertas características. Posteriormente seleccionar la ubicación a la cual el usuario desea recoger su vehículo y finalmente un asesor de ventas le brindara su información, para ponerse en contacto.

## Correcciones

#### Corrección 1:

Se implementaron las clases que se encuentran en el diagrama de clases en UML, haciendo congruencia entre UML y código. No tenía implementadas las clases Suv, Sedan y Hatchback, pero ya se encuentran, están en el **archivo auto.h de la línea 242 a 490.**

Pertenece a la subcompetencia Toma de decisiones, indicador: "Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML.
Avance 3"

#### Corrección 2:

Implemente composición en el proyecto siguiendo el diagrama de clases en UML, A la agencia se le agregan SUV´s, Sedanes, Hatchbacks y Asesores.
Los atributos en donde se guardan los objetos se encuentran en el **archivo agencia.h Lineas 29, 31, 32, 33.**

Los prototipos de las funciones para hacer la agregación se encuentran en el **archivo agencia.h de la línea 65 a 71.**

Los métodos se encuentran en el archivo **agencia.h de la línea 159 a a 229.**

En el main se implementa agregación en las líneas:

**38, 50, 55, 59, 63, 130, 131, 140, 141, 149, 150.**

Pertenece a la sub-competencia Implementa SICT0303A, indicador: "Implemento composición (o agregación) siguiendo mi diagrama de clases Avance 3"

#### Correción 3:

Guarde los avances en commits, haciendolos más descriptivos, como me sugieren los becarios. Elimine 3 archivos de las clases para ponerle nombres más descriptivos. Esto porque no estaba seguro de que es lo que iba hacer de proyecto final, había dejado los nombres muy genéricos como class1.h, class2.h, class3.h pero ahora ya tienen nombres más descriptivos cada archivo. Esto lo hice antes consultando al profesor :)

Se puede observar en el **repositorio de github,** así como en el control de versiones.

Pertenece a la sub-competencia Tecnologías SEG0702A, indicador: "Guardo correctamente los avances en commits durante la materia. Avance 3"

## Instrucciones

- Descargar los archivos y colocarlos en una misma carpeta.

**Opción 1:**

- Compilar el programa en terminal con: g++ main.cpp -o **programa** (*nombre deseado*)
- Correr el programa en consola con: **programa**.exe

**Opción 2:**

- Compilar el programa en terminal con: g++ main.cpp

- Correr el programa en consola con: a.exe

*Nota: Esto es usando el compilador g++ de MinGW en Windows.*

## Restricciones

Para que el programa funciones correctamente, al momento de ingresar datos de entrada, ingresar únicamente una palabra o numero de acuerdo con lo que se pide, evitar espacios porque de lo contrario el programa no funciona adecuadamente y termina con la ejecución.

Ejemplo:

### Entrada sin espacios (Bien)
      Escriba el modelo: Tsuru
          

### Entrada con espacios (Termina la ejecución del programa)
      Escriba el modelo:* Tsuru V8
          
## Sugerencia.

-	Leer cuidadosamente lo que se pide para configurar los autos.
-	Correr al menos dos veces el programa para probar las dos opciones del primer menú
