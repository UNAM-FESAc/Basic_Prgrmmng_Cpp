# Bases

Una vez que ya sabemos como empezar a usar el lenguaje C++,
continuaremos con aprender a usarlo, entendiendo sus componentes básicos
así como la forma en que pensar para dirigir nuestros pensamientos e
instrucciones hacia el lenguaje.

## Programación

**¿Qué es?** Actualmente se asocia con la creación de las instrucciones
y materiales que usara un dispositivo para crear y correr trabajos.  
Cada vez gana más popularidad la programación, por su pocos
requerimientos para generar *lo que se pueda imaginar*, desde
videojuegos y ocio, hasta cálculos científicos y económicos, entre otras
aplicaciones.

## Paradigmas de programación

En si los paradigmas son la forma de pensar y/o resolver los problemas
que requieren de programación. Unos lenguajes pueden tomar distintos
paradigmas a la vez, mientras que otros se restringen a solo uno.  
De los más populares se encuentran:

  - **Paradigma Estructurado.**

  - **Paradigma Orientado a Objetos.**

  - Paradigma Orientado a Eventos.

  - Paradigma Funcional.

Los dos paradigmas marcados en negritas son populares de usar en C++,
aunque según nuevas versiones del lenguaje, se pueden usar otros
paradigmas más, lo que vuelve a C++ muy versátil. Dado que este manual
es introductorio, solo hablaremos del Paradigma estructurado.

## Paradigma Estructurado

Este paradigma es de los más comunes, se basa en la secuenciación de
instrucciones, como si de un recetario o instructivo se tratara. Esta
forma de organizar el programa sigue en si una “estructura”, de ahí el
nombre. Podemos leer e interpretar el código como una lectura en
español, como los ejemplos mencionados. Esto es que el código se lee de
izquierda a derecha, y de arriba a abajo. Posteriormente en
[\[sec:control\]](#sec:control) se mencionaran formas de modificar un
poco esta estructura, de tal manera que nos permita realizar más
acciones sin escribir tanto.

## Empezando a programar en C++

Como se vio en la sección [\[sec:compilar\]](#sec:compilar) , puede
usarse cualquier medio para programar, siempre que tenga la misma
versión (o mayor en muchos lenguajes, incluyendo C++), para propósitos
de introducción y permitirle al lector programar desde donde este
(inclusive dispositivos móviles), el código mostrado en este manual ha
sido compilado y ejecutado en el sitio:
<https://www.onlinegdb.com/online_c++_compiler>.  
Para empezar se mostraran las partes principales de un programa en C++
con el ejemplo clásico de “Hola Mundo”:

``` c++
Holamundo.cpp
```

Como se menciona en el código, los comentarios (Texto en verde) son
ignorados por el compilador, lo cual es útil para que los humanos
podamos dejar información sobre que hacen partes del código.Sin embargo, los acentos o caracteres fuera del abecedario simple pueden
aparecer extraños o modificarse, por lo que se recomienda no usarlos.  
Se considera buena práctica comentar el código que uno realiza, así
puede saber para que era cada parte si se llega a olvidar posteriormente
o se quiere revisar.  
  
Se deja como ejercicio al lector compilar y ejecutar el programa
eliminando los comentarios, para que pueda observar como se produce el
mismo resultado que si se dejan. **Nótese** que lo que no esta de color
verde (no es un comentario) lleva mayúsculas y minúsculas, así como
puntos y orden, si se reemplazan, omiten o eliminan/agregan cosas,
entonces el programa marcara errores. Véase la sección
[\[sec:compilar\]](#sec:compilar) para mas información sobre algunos
errores comunes.  
  
La estructura *cout* `<<` debe cumplir con tener a la derecha un tipo de
dato que pueda ser escrito, veremos la mayoría de estos en
[\[sec:datb\]](#sec:datb) .  
Al colocar algo entre `" "` estamos diciendo que todo lo de adentro es
un arreglo de caracteres (incluyendo los espacios), podemos juntarle (o
concatenarle) al texto otros datos con el signo (operador) `<<` que
también puedan representarse en texto, por ejemplo: *cout* `<<` `"` *Un
texto y el numero* `"<<` *3.4* `<< "` *aqui.*`"`. Imprimirá en pantalla:
*Un texto y el numero 3.4 aqui.*.  
Nótese que los espacios entre `""` se conservaron en la frase final.  
  
Estos textos también pueden decirse que son Strings, de las cuales
hablaremos mas adelante en [\[sec:memoria\]](#sec:memoria).

## Tipos de datos básicos

Para almacenar y usar datos, debemos declarar de que tipo son, para que
la computadora conozca como operarlos, a continuación se presentan los
mas generales y comunes en la mayoría de los lenguajes de programación:

  - **bit**: unidad de almacenamiento mínima, puede valer 1 o 0.

  - **byte**: unidad compuesta por 8 bits.

  - **char** (carácter): puede valer 1 a 2 bytes, representa símbolos o
    letras.

  - **int** (entero): 2 a 4 bytes, puede representar números enteros.

  - **float** (punto flotante): 4 bytes, representa números reales (con
    decimales).

  - **double** (doble punto flotante): 8 bytes, representa números
    reales con mayor precisión.

El lenguaje C++ incluye otros tipos de datos que brindan mayor utilidad,
se mencionaran en el código que sigue pero se dejara su aplicación
individual para el gusto y la necesidad del lector. Dado que los tamaños
de cada dato pueden variar a veces por la arquitectura de la computadora
y mas que nada por el lenguaje de programación, a continuación se
muestra un ejemplo de código\[1\] que imprime los tamaños de cada dato
básico en el lenguaje C++ que se usa en este manual para familiarizar
al lector:

``` c++
TiposDatos.cpp
```

Ahora observe como cambia la representación de cada valor al ser impreso
según su tipo de dato.

``` c++
DatosImpresos.cpp
```
to 
Del código se puede observar que usamos algo nuevo en la linea 8.
Aqui *(float)* indica a la computadora que queremos convertir un tipo de
dato cualquiera a un tipo *float*, esto es una conversión explicita,
hablaremos a detalle de estas en [\[sec:Conv\]](#sec:Conv) , básicamente
sirve para lograr asignar el valor y su tipo deseado a la variable c.  
Además obsérvese como float recorta dígitos que en algunas situaciones
nos podrían ser útiles, así que es importante saber con que propósito se
usara la aplicación, para saber si vale la pena el peso extra que
conlleva un double, o un float es suficiente.  
**Experimente** un poco cambiando el valor de a para observar que
caracteres puede llegar a escribir. También usa los otros tipos que
faltan del código [\[prog:TipDat\]](#prog:TipDat).

## Funciones

Las funciones son una secuencia de instrucciones que se encierran con un
nombre. Estas nos dan varias ventajas:

  - Reusabilidad del código: podemos repetir esa secuencia de
    instrucciones siempre que queramos con solo llamarla.

  - Modularización: separamos en partes la lógica del programa, lo cual
    facilita identificar en que parte se genera un problema y facilita
    la solución.

  - Claridad: entendemos mejor que debe hacer una sección del código, se
    recomienda usar nombres claros y comentar las partes del código.

La estructura de una función es:

    tipoDatoResultado nombre(tipoDato parametro1, tipoDato pm2, ...)
    {
        /*Cuerpo de la función*/
        return resultado; //si tipoDatoResultado no es void
    }

Observa el siguiente ejemplo:
``` c++
Funciones.cpp
```

En este ejemplo creamos una función de tipo int (entero) que también
toma un parámetro de tipo int, y regresa el mismo parámetro multiplicado
por si. Este resultado que regresa se puede usar como tal, ya sea en
otras funciones o partes del código como se observa en la linea 11.

Las funciones siempre deben ir declaradas antes de donde se usan, esto
es, que al menos se debe conocer su nombre. Observa los siguientes
códigos y prueba a ver cual de los dos funciona:

``` c++
FuncionesMAL.cpp
```

``` c++
FuncionesBIEN.cpp
```

Se recomienda usar la estructura en [\[prog:funcBien\]](#prog:funcBien)
para funciones extensas, así se facilita leer primero la función main
(principal) y después navegar hacia las funciones especificas cuando
sean llamadas.  
Cabe notar, que las variables ingresadas como parámetros son
**copiadas**, esto es, que hagamos lo que sea, el valor original que
mandamos a la función no se vera afectado, a menos que se usen
apuntadores, hablaremos más de ellos en [\[sec:apunt\]](#sec:apunt) .

## Declarar y definir

Mencionamos brevemente que era declarar, pero ahora veamos que esto se
aplica tanto a funciones como a otros elementos. Observa el siguiente
código e intenta identificar cual es una declaración y cual una
definición.

``` c++
declaracionvsdefinicion.cpp
```
Como te podrás haber dado cuenta, los comentarios con estrella son
declaraciones, mientras los que no la tienen son definiciones. Observa
que si eliminas una definición, el programa fallara, esto es porque si
bien puede identificar el elemento, no sabe que hacer con él.  
En el caso de variables, se pueden declarar pero al asignarles un valor
(por primera vez) es *inicializarlas*, al contrario de una definición,
puedes usar una variable si no ha sido inicializada, pero contendrá
información basura, o bien pues números al azar que ya estaban en ese
espacio de memoria que pidió tu programa para almacenar la variable.

## Procedimientos

En la estructura de una función se menciono que se puede omitir el
resultado si el tipo de la función es *void*, este tipo de dato es
especial al indicar que no se espera nada, es nulo y/o vació. Por lo que
la función es en realidad un *procedimiento*, esto es, que realiza
acciones sin tener un valor de salida, puede o no tomar valores. Observa
el siguiente ejemplo:

``` c++
FuncionesVOID.cpp
```

Si bien los procedimientos no regresan valores, pueden usar *return*
cuando se quiere salir antes de la función, por ejemplo:

``` c++
FuncionesVOIDAlt.cpp
```

El “if ” usado en la linea 6 es una secuencia de control, en si controlan el flujo del programa,
hablaremos más de ellas en [\[sec:control\]](#sec:control).

## Conversiones

Anteriormente en [\[sec:datb\]](#sec:datb) se menciono que se realizaba
una conversión de un tipo de dato a otro. Tal como el nombre lo indica,
las conversiones de tipo (*type conversion*) son el proceso de cambiar
un tipo de dato en otro. En C++ este procedimiento se puede llevar a
cabo de dos formas que se mencionan en las siguientes subsecciones.

### Conversiones Implícitas

Como el nombre lo indica, estas conversiones se llevan a cabo de forma
automática cuando es necesario por el compilador. Por ejemplo cuando se
espera un tipo de dato, pero se recibe otro, o al querer evitar perder
datos. Observa el siguiente programa de ejemplo e identifica cuando se
realiza una conversión implicita:

``` c++
ConversionesImplicitas.cpp
```

Ahora presta atención a la linea 10.
Si corriste el código te puedes dar cuenta que la ecuación no dará el
resultado esperado, esto puede complicar las cosas y llevar a errores
minuciosos en ciertas ocasiones, ya que el compilador en expresiones
siempre intentara hacer coincidir un valor operado con otro, de lo
contrario intentara convertir el tipo del dato mas bajo en bytes al tipo
del mas grande. Para permitir al programador tener la libertad de
especificar que dato se espera, se pueden hacer las conversiones de a
continuación.

### Conversiones Explicitas

Estas son especificadas por el programador y se aseguran de tener el
dato esperado. Existen varias formas de hacer este procedimiento que se
mencionan a continuación:

**Conversiones estilo C**  
Como el nombre lo indica, vienen del lenguaje original c, se realizan
colocando el nombre del tipo de dato que se desea entre paréntesis y a
la derecha se encuentra el valor a ser convertido. Alternativamente se
puede escribir como una llamada a una función, donde el parámetro que
toma es el tipo de dato a convertir. Observa el siguiente ejemplo y
presta atención al orden en como se escribe:

``` c++
ConversionExplicitaC.cpp
```

Presta atención a como se debe ser bien especifico al usar estas
conversiones para evitar los mismos errores que obtendrías al omitirlos.
El problema con este tipo de conversión es que no se revisan, por lo que
pueden obtenerse errores difíciles de rastrear.

**Conversiones con static\_cast** En c++ se tiene un operador más seguro
llamado “*static\_cast*”, el cual verifica que no se cometan cosas
absurdas en la operación de un programa, este funciono mas como una
función, donde toma el valor a ser convertido entre paréntesis y el tipo
de dato al cual convertir entre “`< >`”. Observa el siguiente código:

``` c++
ConversionExplicitaStatic.cpp
```

Este tipo de conversión da claridad y seguridad al código por lo que se
recomienda utilizarla por lo general.  
Aunque si bien existen otros tipos, estos se consideran muy específicos
y fuera del objetivo de estas lecciones, por lo que se omiten.

1.  Código compilado y ejecutado en
    <https://www.onlinegdb.com/online_c++_compiler >
