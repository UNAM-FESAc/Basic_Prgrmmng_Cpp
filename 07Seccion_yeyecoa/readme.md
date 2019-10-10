# Sección Yeyecoa

Lo aprendido hasta ahora han sido elementos básicos y necesarios para
empezar a programar y encaminarse en Java. Sin embargo hay algunos temas
que pueden ser de utilidad, como a continuación se presentan algunos. Si
ya te sientes listo para hacer retos avanza a
[\[subsec:Ayeyecoa\]](#subsec:Ayeyecoa) .

## Secuencias de escape

Algunos caracteres que tienen una diagonal (“\\”) antes tienen un
significado para el compilador, a estos se les llaman “secuencias de
escape”, y representan cosas distintas, como se muestra en la siguiente
tabla:

|      |                                                                                                                                                                                                                            |
| :--- | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| \\t  | Inserta una tabulación o tab en el texto en este punto.                                                                                                                                                                    |
| \\b  | Inserta un backspace en la posición donde esta el texto.                                                                                                                                                                   |
| \\n  | Inserta una nueva linea o “enter”.                                                                                                                                                                                         |
| \\r  | Inserta un “retorno de carro”, solía ser para regresar el marcador del texto al inicio, pero en tiempos modernos a cambiado un poco su funcionalidad, siendo inútil o similar a un \\n en algunos compiladores o entornos. |
| \\f  | Inserta un “formfeed”, sirve para limpiar la pantalla en consola.                                                                                                                                                          |
| \\’  | Inserta una comilla simple ’ en donde se escribe la secuencia.                                                                                                                                                             |
| \\"  | Inserta una comilla doble `"` en donde se escribe la secuencia.                                                                                                                                                            |
| \\\\ | Inserta un \\en el lugar donde se escribe la secuencia.                                                                                                                                                                    |

Secuencias de escape <span label="tab:secesc"></span>

Es de notar que estos toman significado cuando se trata de procesar
texto, principalmente se han mostrado en ejemplos con la función
“*System.out.print( )*” o “*System.out.println( )*” ,donde la primera
solo escribe el texto que se le manda, mientras que la segunda anexa un
“\\n” al final del texto ingresado entre paréntesis.

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

``` java
EjercicioUno.java
```

**Yeyecoa 2**: Usando secuencias de control, imprime una pirámide hecha
con \* de al menos 5 niveles.

<span>Respuesta del ejercicio 2</span><span>yeye:2</span><span>0</span>

``` java
EjercicioDos.java
```

**Práctica 3**: Usando secuencias de control, calcula el factorial de un
número, considera el factorial de 0 y 1 como que vale 1. *El factorial
de un número es la multiplicación del mismo por el número anterior a
este, así sucesivamente hasta llegar a 1*.

<span>Respuesta del ejercicio 3</span><span>yeye:3</span><span>0</span>

``` java
EjercicioTres.java
```

**Práctica 4**: Usando secuencias de control. Escribe en pantalla que
letra denomina la calificación de un alumno, siendo que más de 90 puntos
es “A”, entre 79 y 91 es “B”, entre 69 y 80 es “C”, entre 59 y 70 es
“D”, menos de 60 es F. Para el valor de la calificación escribe una
variable

<span>Respuesta del ejercicio 4</span><span>yeye:4</span><span>0</span>

``` java
EjercicioCuat.java
```

**Yeyecoa 5**: Calcula el Máximo Común Divisor entre 2 números. *Pista:
usa el operador % y compáralo a 0 para revisar si un número es
divisible, aprovecha también la secuencia de control for y el operador
lógico* &&.  
*El Máximo Común Divisor (MCD)* es el número mas grande que puede
dividir a 2 números sin dejar residuo.

<span>Respuesta del ejercicio 5</span><span>yeye:5</span><span>0</span>

``` java
EjercicioCinc.java
```

No te detengas con estos ejercicios, busca ejemplos o casos de la vida
real que se te podrían facilitar si emplearas lo aprendido de programación para realizar las operaciones y/o cálculos que
veas necesarios. Si te llamaron la atención estos ejercicios revisa la
sección [\[subsec:pordiv\]](#subsec:pordiv) para obtener sugerencias de
donde poder practicar más.
