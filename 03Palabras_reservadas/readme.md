# Palabras reservadas

Hemos entendido hasta ahora algunos componentes, pero ¿Qué pasa con
algunas palabras que hemos estado viendo como “include”?, estas se
conocen como *palabras reservadas* del lenguaje C++, y como el nombre lo
indica, tienen un propósito ya definido por el lenguaje.  
Algunos que hemos utilizado son los nombres de los tipos de datos: *int,
char, double, float* Como se nota en el código, estas palabras se marcan
de un color distintivo, en este manual se usa el color azul.  
Cada palabra puede tener un significado y uso distinto, a continuación
se muestran algunos de los más comunes, excluyendo los mencionados
anteriormente que ya hemos visto.

  - **include**: incluir, sirve para traer variables, clases, funciones
    entre otros elementos que se encuentran en librerías, se hablara más
    de estas en [\[sec:liberias\]](#sec:liberias) .

  - **using**: usando, como en los ejemplos presentados hasta ahorita,
    se suele usar antes de la palabra *namespace* y el nombre de la
    librería (en el código) para evitar escribir el nombre y el operador
    antes de los elementos de la librería, no se recomienda usar esto
    mas que en códigos cortos, y aun así se debe evitar ya que previene
    recordar de donde viene cada elemento, por lo que pueden causarse
    conflictos.

  - **namespace**: permite englobar funciones, variables, y demás
    elementos en un nombre común con el cual se puedan usar sin
    interferir con otros elementos con los mismo nombres.

  - **public**: publico, declara la variable o método (función) como
    publica, esto es que cualquier parte del programa puede acceder a
    ella, se asocia con el concepto de encapsulamiento que corresponde
    al Paradigma Orientado a Objetos, el cual no entra en el nivel de
    este manual.

  - **private**: privada, declara la variable o método como privada, así
    solo la clase u objeto que lo contiene puede usarlo, se asocia con
    el concepto de encapsulamiento. Cuando una variable o función no
    tiene public, private o protected, se toma private por defecto.

  - **protected**: protegido, similar a private, pero los hijos de la
    clase pueden acceder a esta parte, se asocia con el concepto de
    encapsulamiento y herencia.

  - **static**: estático, establece que solo puede existir una
    declaración y definición de esta variable o función en el programa.

  - **void**: vació, sirve para declarar que no se espera un valor, una
    función que lo tiene antes indica que es un proceso, ya que realiza
    acciones pero no regresa un valor al terminar.

  - **return**: regresar, se coloca antes del valor a regresar, el cual
    debe ser un tipo de dato similar al que se declaro antes del nombre
    de la función. Marca la salida de la función.

  - **break**: termina antes la secuencia de control en la que se
    encuentra, se explica mas sobre estas en
    [\[sec:control\]](#sec:control) .

  - **continue**: continuar, se brinca a la siguiente iteración de la
    secuencia de control actual.

  - **auto**: automatico, se usa para interpretar automáticamente el
    tipo de dato, su uso sale del alcance de este manual.

  - **new**: nuevo, se utiliza para crear nuevos elementos como memoria
    dinámica, estos se deben eliminar con *delete*.

  - **delete**: borrar, libera la memoria de elementos dinámicos creados
    con *new*.

  - **try**: intenta realizar lo que le siga entre paréntesis, este y
    las siguientes 2 palabras son usadas para funcion o partes de código
    que pueden causar errores.

  - **catch** : atrapa, sirve para declarar que hacer cuando en el
    código anterior dentro de try tira un error.

  - **throw**: aventar, regresa un tipo de error manejable cuando sucede
    una condición.
    
## Librerías

Las librerías son colecciones de código, donde hay tipos de datos,
objetos y métodos entre otras cosas, que en lo general se engloban por
su utilidad. Previamente se menciono que la palabra reservada *using*
lleva en la sintaxis el nombre de la librería, pero en realidad es su
*header* (encabezado), los headers son archivos que contienen las
**declaraciones** de los objetos, son como código pero sin un propósito
mas que para enlazar la funcionalidad de otros códigos.  
En el momento que se coloca el *include* y el *header* se copian todos
los contenidos de este archivo al código que estamos usando, pero lo
mantiene limpio para la vista del programador con una simple oración.
Esto da la ventaja de tener archivos menos pesados, ya que las
definiciones de los elementos de la librería se encuentran en otro
archivo.  
Los elementos de las librerías se suelen llamar con su *namespace* y un
par de dobles puntos (el operador “::” mencionado al inicio de la tabla
[\[tab:operadores\]](#tab:operadores) ), todas las librerías incluidas
en C++ usan el *namespace* llamado *std*, que es corto para *standard*
(estándar). Existen varias librerías en C++, pero a continuación mencionamos por su *header* las más usadas:

 - **iostream**: librería básica para C++, permite escribir, recibir
    información, entre otras cosas.

  - **iomanip**: permite darle formato a la salida y entrada de datos.

  - **cstdlib**: es el estándar del lenguaje C, permite usar muchas de
    las funciones contenidas ahí.

  - **cstdio**: entrada y salida de datos en estilo C.

  - **ctime**: permite usar funciones de tiempo en el estilo de C.

  - **chrono**: utilidades de tiempo en C++.

  - **cstring**: libreria de string en estilo C.

  - **array**: permite usar el tipo *array* para memoria.

  - **string**: permite usar el tipo *string* para arreglos de
    caracteres en estilo C++.

  - **vector**: permite usar el tipo *vector\<\>* para memoria dinámica.

  - **map**: permite usar el tipo *map* para el mapeo de datos.

  - **algorithm**: libreria de funciones y operaciones con elementos,
    asi como varios algoritmos.

  - **random**: contiene utilidades para numeros aleatorios.
  
  Como puedes observar hay varias librerías del lenguaje C, y no es
coincidencia, ya que C++ permite usar varias funcionalidades del
primero, pero es importante **no confundirlos** ya que sí contienen sus
diferencias cruciales y la compatibilidad de un código escrito en C con
otro en C++ y viceversa puede ser coincidencia.  
  
Dado que ya hemos explicado las librerías y de donde vienen varias
funciones que hemos estado usando, de ahora en adelante no usaremos la
linea“ *using namespace std;*”, para inculcar una **buena practica de
programación**, así como un nuevo reto al lector donde tendrá que
identificar de donde viene cada parte del programa que hace.
