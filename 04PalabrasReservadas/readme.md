# Palabras reservadas

Hemos entendido hasta ahora algunos componentes, pero ¿Qué pasa con
algunas palabras que hemos estado viendo como “public”?, estas se
conocen como *palabras reservadas* del lenguaje Java, y como el nombre
lo indica, tienen un propósito ya definido por el lenguaje.  
Algunos que hemos utilizado son los nombres de los tipos de datos: *int,
char, double, float, boolean*. También los valores *true* y *false*.  
Como se nota en el código, estas palabras se marcan de un color
distintivo, en este manual se usa el color azul.  
Cada palabra puede tener un significado y uso distinto, a continuación
se muestran algunos de los más comunes, excluyendo los mencionados
anteriormente que ya hemos visto:

 - **package**: Aunque no se ha mencionado en los códigos de ejemplo,
    este es necesario para indicar al programa completo el contexto en
    donde se encuentra, esto es, cada programa diferente que hagamos y
    este relacionado dentro del mismo programa se compile todo junto. Es
    común usarlo en programas compuestos por varios archivos, así como
    en algunos IDEs que lo llegan a pedir como NetBeans.

  - **import**: importar, sirve para traer variables, clases, funciones
    entre otros elementos que se encuentran librerías, estas son en las
    que se basa Java para generalizar su utilidad y se verán algunas de
    las mas populares a mayor detalle en el manual intermedio de Java.
    Las librerías y sus secciones se suelen separar por puntos, siendo
    la palabra más a la izquierda la que contiene a las de la derecha,
    si se quiere traer los contenidos de **todas** las secciones de una
    división se coloca \* al lado del punto.

  - **public**: declara la variable o método (función) como publica,
    esto es que cualquier parte del programa puede acceder a ella, se
    asocia con el concepto de encapsulamiento que veremos en
    [\[subsec:POOJav\]](#subsec:POOJav) .

  - **private**: declara la variable o método como privada, así solo la
    clase u objeto que lo contiene puede usarlo, se asocia con el
    concepto de encapsulamiento. Cuando una variable o función no tiene
    public, private o protected, se toma private por default dento del
    mismo paquete o “package”.

  - **protected**: protegido, similar a private, pero los hijos de la
    clase pueden acceder a esta parte, se asocia con el concepto de
    encapsulamiento y herencia.

  - **static**: estático, establece que solo puede existir una
    declaración y definición de esta variable o función en el programa.

  - **void**: vació, sirve para declarar que no se espera un valor, una
    función que lo tiene antes indica que es un proceso, ya que realiza
    acciones pero no regresa un valor al terminar.

  - **return**: se coloca antes del valor a regresar, el cual debe ser
    un tipo de dato similar al que se declaro antes del nombre de la
    función. Marca la salida de la función.

  - **break**: termina antes la secuencia de control en la que se
    encuentra, se explica mas sobre estas en
    [\[sec:control\]](#sec:control) .

  - **continue**: se brinca a la siguiente iteración de la secuencia de
    control actual.

  - **new**: se utiliza para crear nuevos objetos de una clase.

  - **try**: intenta realizar lo que le siga entre paréntesis, este y
    las siguientes 2 palabras son usadas para funcion o partes de código
    que pueden causar errores.

  - **catch** : atrapa, sirve para declarar que hacer cuando en el
    código anterior dentro de try tira un error.

  - **throw**: aventar, regresa un tipo de error manejable cuando sucede
    una condición.
