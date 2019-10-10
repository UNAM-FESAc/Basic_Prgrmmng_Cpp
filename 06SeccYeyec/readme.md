# Sección Yeyecoa

Lo aprendido hasta ahora han sido elementos básicos y necesarios para
empezar a programar y encaminarse en C++. Sin embargo hay algunos temas
que pueden ser de utilidad, como a continuación se presentan algunos. Si
ya te sientes listo para hacer retos avanza a
[\[sec:Ayeyecoa\]](#sec:Ayeyecoa) .

## Secuencias de escape

Algunos caracteres que tienen una diagonal (“\\”) antes tienen un
significado para el compilador, a estos se les llaman “secuencias de
escape”, y representan cosas distintas, como se muestra en la siguiente
tabla:

|               |                                                                                                                                                                                                                            |
| :------------ | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|               |                                                                                                                                                                                                                            |
|               |                                                                                                                                                                                                                            |
|               |                                                                                                                                                                                                                            |
| \\a           | emite una campanita o alarma audible.                                                                                                                                                                                      |
| \\b           | Inserta un backspace en la posición donde esta el texto.                                                                                                                                                                   |
| \\f           | Inserta un “formfeed”, sirve para limpiar la pantalla en consola.                                                                                                                                                          |
| \\n           | Inserta una nueva linea o “enter”.                                                                                                                                                                                         |
| \\r           | Inserta un “retorno de carro”, solía ser para regresar el marcador del texto al inicio, pero en tiempos modernos a cambiado un poco su funcionalidad, siendo inútil o similar a un \\n en algunos compiladores o entornos. |
| \\t           | Inserta una tabulación o tab (horizontal) en el texto en este punto.                                                                                                                                                       |
| \\v           | Inserta una tabulación o tab (vertical) en el texto en este punto.                                                                                                                                                         |
| \\’           | Inserta una comilla simple ’ en donde se escribe la secuencia.                                                                                                                                                             |
| \\"           | Inserta una comilla doble `"` en donde se escribe la secuencia.                                                                                                                                                            |
| \\\\          | Inserta un \\en el lugar donde se escribe la secuencia.                                                                                                                                                                    |
| \\?           | Inserta un signo de pregunta en el texto en este punto.                                                                                                                                                                    |
| \\*nnn*       | Donde n son dígitos, escribe un valor en representación octal.                                                                                                                                                             |
| \\x*n*        | Donde n es cualquier entero, escribe ese valor en hexadecimal.                                                                                                                                                             |
| \\u*nnnn*     | Donde n son dígitos, escribe ese valor en su representación de carácter universal.                                                                                                                                         |
| \\U*nnnnnnnn* | Donde n son dígitos, escribe ese valor en su representación de carácter universal.                                                                                                                                         |
|               |                                                                                                                                                                                                                            |

Secuencias de escape <span label="tab:secesc"></span>

Es de notar que estos toman significado cuando se trata de procesar
texto, lo que se ha mostrado en ejemplos con “cout \(<<\)” o “std::cout
\(<<\)”.

## Buenas practicas de comentarios

Los comentarios en los códigos juegan un papel mas importante que solo
dejar notas, ya que permiten hablar específicamente de partes del código
sin tener que salirse de él a explicarlo, o tener que analizarlo
detalladamente para entender que quiere hacer, aunque esto también es
valido y puede agregar más claridad, sin embargo, esto ultimo se suele
realizar en trabajos o proyectos grandes.  
Entonces surgen la dudas, ¿como debería comentar mi código? y ¿cuando
debería hacerlo? primero hablemos de comentarlo: No basta con solo
comentar el código, también es importante entender los comentarios,
estos deben ser claros y rápidos, por lo general indicando que hace la
función y que regresa, y por completitud no afecta agregar explicaciones
de ciertas lineas de código que puedan ser confusas en el futuro, por lo
general estas son aquellas que realizan más de una acción en la misma
linea, siendo la excepción el escribir con *cout \(<<\)*. Observa el
siguiente ejemplo e intenta entender que hace la “función\_a”, primero
sin comentarios, luego compara que entiendes mejor entre las 2 versiones
con comentarios:

``` c++
comentariosVACIO.cpp
```

``` c++
comentariosMAL.cpp
```

``` c++
comentariosBien.cpp
```

Como puedes darte cuenta, el código [\[prog:comB\]](#prog:comB) da una
idea clara y rápida de lo que hace la función, es posible ser aun mas
específicos con los comentarios, y en algunos lugares se usan ciertos
formatos para lograr esta claridad.  
Es una buena practica comentar todas las funciones y partes que no sean
especificas para agregar claridad, evitando comentarios largos, con tal
de entender el propósito general del código sin tener que indagarlo
mucho.  
Aunque claro, existe una excepción a cuando comentar, y esto es cuando
la versión del código es destinada a ser enviada al cliente o publicada.
Estas versiones deben ser lo mas ligeras posibles, por lo que los
comentarios pueden terminar siendo un obstáculo en proyectos grandes. De
todas formas no debe hace falta una versión del código destinada al
desarrollador que contenga los comentarios.  
Podemos resumir estos puntos de la siguiente forma:

  - Siempre comenta tu código (excepto en la versión destinada a
    publicar).

  - Realiza comentarios claros, específicos y sencillos.

  - Sigue un formato para comentar, ya sea propio o decidido por el
    equipo.

  - Se consistente en este formato (también aplica al código).

Por ultimo, se le muestra un uso útil de los comentarios en el código
para pruebas:

``` c++
comentariosTip.cpp
```

Este uso es valido en otros lenguajes que acepten comentarios de la
misma forma, solo recuerda no usarlo en código formal.

## Recursividad

Cuando hablamos de funciones en [\[sec:Func\]](#sec:Func) , también
mencionamos que estas nos permiten reusarlas varias veces, esto es sin
limite y también puede agregarse sin importar en donde sea usada. Esto
ultimo nos da la gran ventaja de poder hacer funciones que se usen a si
mismas, siendo conocidas como funciones “recursivas”, y brindando gran
simplicidad y velocidad al código.  
Estas funciones pueden causar problemas si no se cuidan, ya que pueden
ocasionar bucles o errores de memoria, por lo que se deben definir
claramente los siguientes aspectos:

  - **Condición de paro**: esta es una revisión que nos diga cuando
    detener la recursividad de la función.

  - **Casos**: si existen diferentes rutas o caminos a tomar, se deben
    especificar que sucede en aquellos casos.

  - **Procedimiento**: son las acciones a tomar en cada caso, deben
    cuidar estar dentro de los limites del programa y su memoria
    asignada.

Observa el siguiente ejemplo:

``` c++
recursionCuenta.cpp
```

Como puedes darte cuenta, realiza casi lo mismo que una secuencia de
control puede lograr. Sin embargo, es importante notar que como función
se realizan todas completas hasta llegar a un *return* o terminar,
observa el siguiente ejemplo y diferencia entre el for y la función
recursiva.

``` c++
recursionCentro.cpp
```

Como puedes observar, esta capacidad de las funciones nos permiten
realizar recursión múltiple, lo cual terminaría siendo muy complicado en
el caso de usar secuencias de control. Esta técnica es muy importante al
hacer operaciones con memoria o análisis que requieran operaciones
múltiples. El problema es que las funciones requieren memoria, y si se
hacen demasiadas por usar recursión, puede fallar el programa.  
Similarmente, hay ocasiones en las que la iteración por secuencias de
control es más conveniente, como por ejemplo el código
[\[prog:recuCuen\]](#prog:recuCuen) es más entendible, corto y rápido si
se realiza con un simple *for*.

## Ahora Yeyecoa

Para practicar lo aprendido, realiza las siguientes actividades, si te
sientes atorado en alguna revisa la respuesta, aunque no es necesario
que sean idénticos los códigos para tener los mismos resultados,
*inclusive puede hacer código mucho mejor*\! Los ejercicios **yeyecoa**
son algo especiales ya que requieren pensar más en la solución, pero te
permitirán perfeccionar tu conocimiento.  
  
**Práctica 1**: Busca en linea los valores en ASCII de los caracteres
que necesites, para que así asignándolos a varios datos tipo char puedas
imprimir “Hola Mundo\!”

<span>Respuesta del ejercicio 1</span><span>yeye:1</span><span>0</span>

``` c++
EjercicioUno.cpp
```

**Yeyecoa 2**: Usando secuencias de control, imprime una pirámide hecha
con \* de al menos 5 niveles.

<span>Respuesta del ejercicio 2</span><span>yeye:2</span><span>0</span>

``` c++
EjercicioDos.cpp
```

**Práctica 3**: Usando secuencias de control, calcula el factorial de un
número, considera el factorial de 0 y 1 como que vale 1. *El factorial
de un número es la multiplicación del mismo por el número anterior a
este, así sucesivamente hasta llegar a 1*.

<span>Respuesta del ejercicio 3</span><span>yeye:3</span><span>0</span>

``` c++
EjercicioTres.cpp
```
**Práctica 4**: Usando secuencias de control. Escribe en pantalla que
letra denomina la calificación de un alumno, siendo que más de 90 puntos
es “A”, entre 79 y 91 es “B”, entre 69 y 80 es “C”, entre 59 y 70 es
“D”, menos de 60 es F. Para el valor de la calificación investiga
“*std::cin \(<<\)*” y asígnale un valor a mano. Si ves muy difícil
esto ultimo inicializa manualmente la variable, y observa la solución.

<span>Respuesta del ejercicio 4</span><span>yeye:4</span><span>0</span>

``` c++
EjercicioCuat.cpp
```

**Yeyecoa 5**: Calcula el Máximo Común Divisor entre 2 números. *Pista:
usa el operador % y compáralo a 0 para revisar si un número es
divisible, aprovecha también la secuencia de control for y el operador
lógico* &&.  
*El Máximo Común Divisor (MCD)* es el número más grande que puede
dividir a 2 números sin dejar residuo.

<span>Respuesta del ejercicio 5</span><span>yeye:5</span><span>0</span>

``` c++
EjercicioCinc.cpp
```

**\*Yeyecoa 6**: De los primeros 20 números de la sucesión de Fibonacci,
obtén cuantos de ellos son pares y cuantos impares. *Pista: usa el
operador % para ver si son divisibles, y usa recursividad para obtener
los números.*  
Un numero de *la sucesión Fibonacci* son aquellos obtenidos por la suma
de los dos anteriores a él, siendo los dos primeros 0 y 1.

<span>Respuesta del ejercicio 6</span><span>yeye:6</span><span>0</span>

``` c++
EjercicioSeis.cpp
```

No te detengas con estos ejercicios, busca ejemplos o casos de la vida
real que se te podrían facilitar si emplearas lo aprendido de
programación para realizar las operaciones y/o cálculos que veas
necesarios. Si te llamaron la atención estos ejercicios revisa la
sección [\[sec:pordiv\]](#sec:pordiv) para obtener sugerencias de donde
poder practicar más.
