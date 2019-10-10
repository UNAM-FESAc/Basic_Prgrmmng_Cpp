# Bases

Una vez que ya sabemos como empezar a usar el lenguaje Java,
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

  - Paradigma Estructurado.

  - **Paradigma Orientado a Objetos.**

  - Paradigma Orientado a Eventos.

  - Paradigma Funcional.

## Paradigma Orientado a Objetos (POO).

Este paradigma es de los mas populares, se basa en la abstracción de
entidades o cosas reales hacia clases, las cuales generan objetos o
instancias con las propiedades especificas del objeto, estas propiedades
se llaman atributos y pueden representar edad, tamaño, entre otras
valores. Las acciones que pueden realizar (o realizarse sobre los mismos
objetos) se les conoce como métodos.  
De estas principales características surgen otros conceptos como el
encapsulamiento, el cual permite que ciertas partes de los objetos no
puedan usarse o modificarse por algo ajeno al objeto, así como la
herencia que, como dice el nombre, permite heredar partes del objeto (o
más bien su abstracción como clase) a otras para que las usen de otra
forma o agreguen más componentes.  
  
Es común que este paradigma sea combinado con el estructurado, el cual
sigue una serie de pasos e instrucciones en secuencia, esto es que sigue
una estructura, lo cual permite facilitar el acomodo del programa y su
completitud. Estos dos paradigmas son utilizados por java, y se usaran
en este manual al ser los mas intuitivos y fáciles de seguir, aunque se
debe recordar que los lenguajes no se restringen a un solo paradigma y
pueden usar inclusive más o menos.

## Empezando a programar en java

Como se vio en la sección [\[subsec:compilar\]](#subsec:compilar) ,
puede usarse cualquier medio para programar, siempre que tenga la misma
versión (o mayor en muchos lenguajes, incluyendo java), para propósitos
de introducción y permitirle al lector programar desde donde este
(inclusive dispositivos móviles), el código mostrado en este manual ha
sido compilado y ejecutado en el sitio:
<https://www.compilejava.net/>.  
Para empezar se mostraran las partes principales de un programa en java
con el ejemplo clásico de “Hola Mundo”:

``` java
Revisa el ejemplo Holamundo.java
```

Como se menciona en el código, los comentarios (Texto en gris) son
ignorados por el compilador, lo cual es útil para que los humanos
podamos dejar información sobre que hacer en partes del código. Sin
embargo, los acentos o caracteres fuera del abecedario simple pueden
aparecer extraños o modificarse, por lo que se recomienda no usarlos.  
Se considera buena práctica comentar el código que uno realiza, así
puede saber para que era cada parte si se llega a olvidar posteriormente
o se quiere revisar.  
  
Se deja como ejercicio al lector compilar y ejecutar el programa
eliminando los comentarios, para que pueda observar que produce el mismo
resultado que si se dejan. **Nótese** que lo que no esta de color verde
(no es un comentario) lleva mayúsculas y minúsculas, así como puntos y
orden, si se reemplazan, omiten o eliminan/agregan cosas, entonces el
programa marcara errores. Véase la sección
[\[subsec:compilar\]](#subsec:compilar) para mas información sobre
algunos errores comunes.

La función *System.out.println(String texto)* debe cumplir con que su
argumento sea un tipo de dato *String* (que por ejemplo llamamos
*texto*) el cual es un arreglo/conjunto de caracteres.  
Al colocar algo entre `" "` estamos diciendo que todo lo de adentro es
un arreglo de caracteres (incluyendo los espacios), podemos juntarle (o
concatenarle) al *String* otros datos con el signo *+* que también
puedan representarse así como los números, por ejemplo
*System.out.println(*`"` *Un texto y el numero* `"` *+ 3.4 +* `"`
*aquí.*`"`) imprimirá en pantalla: *Un texto y el numero 3.4 aquí.*.  
Nótese que los espacios entre `""` se conservaron en la frase final.  
  
El argumento String `[]`args del programa anterior es un dato que
veremos mas adelante en la sección [\[subsec:memoria\]](#subsec:memoria).

# Tipos de datos básicos

Para almacenar y usar datos, debemos declarar de que tipo son, para que
la computadora conozca como operarlos, a continuación se presentan los
mas generales y comunes en la mayoría de los lenguajes de programación:

  - **bit**: unidad de almacenamiento mínima, puede valer 1 o 0;

  - **byte**: unidad compuesta por 8 bits;

  - **char** (carácter): puede valer 1 a 2 bytes, representa símbolos o
    letras;

  - **int** (entero): 2 a 4 bytes, puede representar números enteros.

  - **float** (punto flotante): 4 bytes, representa números reales.

  - **double** (doble punto flotante): 8 bytes, representa números
    reales con mayor precisión.

Dado que los tamaños de cada dato pueden variar a veces por la
arquitectura de la computadora y mas que nada por el lenguaje de
programación, a continuación se muestra un ejemplo de código\[1\] que
imprime los tamaños de cada dato básico en el lenguaje Java que se usa
en este manual para familiarizar al lector:

``` java
TiposDatos.java
```

Observa como cambia la representación de cada valor al ser impreso según
su tipo de dato.

``` java
DatosImpresos.java
```

En el código anterior la parte de *(float)* indica a la computadora que
queremos convertir un tipo de dato a un tipo *float*, esta parte junto
con los respectivos paréntesis que encierran a la operación sirven para
lograr asignar el valor deseado a c, ya que al ser float de un tamaño
menor a double, debemos indicarle **explícitamente** a la computadora
que queremos hacer la conversión del tipo de dato aunque **perdamos**
dígitos.  
También obsérvese como float recorta dígitos que en algunas situaciones
nos podrían ser útiles, así que es importante saber con que propósito se
usara la aplicación, para saber si vale la pena el peso extra que
conlleva un double, o un float es suficiente.  
**Experimenta** un poco cambiando el valor de a para observar que
caracteres puede llegar a escribir.

1.  Código compilado y ejecutado en https://www.compilejava.net/
