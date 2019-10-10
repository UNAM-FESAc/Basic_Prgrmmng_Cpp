# Operadores

Para asociar valores unos con otros, como por ejemplo sumas, relaciones,
lógica, etc... , requerimos hacer operaciones tal como en matemáticas,
es de esta manera como se definen signos, conocidos como **operadores**,
en java para hacer estas operaciones

## Tabla de contenido
1. [Tabla de operadores](#Optabl)
2. [Operadores aritméticos](#Oparit)
3. [Operadores unarios](#Opunar)
4. [Operadores relacionales y los booleanos](#Opbool)
5. [Operadores lógicos](#Oplogi)
6. [Operadores bit a bit](#Opbit)
7. [Operadores de desplazamiento de bits o shift](#Opdesp)
8. [Operadores de asignación](#Opasig)
9. [Operador ternario](#Optern)

## Tabla de operadores <a name="Optabl"></a>
A continuación se presenta una
tabla con el orden que siguen estos operadores, siendo operadores de la
misma linea o precedencia, evaluados de izquierda a derecha, excepto los
últimos de asignación que son evaluados de derecha a izquierda:  

| **Orden** |                                                        |                                                       |
| :-------: | :----------------------------------------------------- | :---------------------------------------------------- |
|     1     | \({++} \quad {--}\)                                    | Operadores posfijos de decremento e incremento        |
|     2     | \({++} \quad {--}\quad + \quad - \quad \sim \quad !\)  | Operadores prefijos unarios                           |
|     3     | \(* \qquad / \qquad \quad \%\)                         | Operadores binarios multiplicativos y modulo          |
|     4     | \(+ \quad -\)                                          | Operadores binarios de adición                        |
|     5     | \(<< \quad >> \quad >>>\)                              | Operadores binarios de shift o desplazamiento en bits |
|     6     | \(< \quad > \quad <= \quad >= \quad instanceof\)       | Operadores relacionales                               |
|     7     | \(\quad == \qquad !=\)                                 | Operadores de equidad                                 |
|     8     | \(\qquad \quad \&\)                                    | Operador bit a bit AND (y)                            |
|     9     | ^                                                      | Operador bit a bit OR exclusivo (xor/o exclusivo)     |
|    10     | \(\qquad \quad |\)                                     | Operador bit a bit OR (o)                             |
|    11     | \(\qquad \quad \&\&\)                                  | Operador AND (y) logico                               |
|    12     | \(\qquad \quad |\; |\)                                 | Operador OR (o) logico                                |
|    13     | \(\qquad \quad ? \; :\)                                | Operador ternario                                     |
|    14     | \= += -= = /= %= &= ^= \(|\)= \(<<\)= \(>>\)= \(>>>=\) | Operadores de asignación                              |

Operadores <span label="tab:operadores"></span>
Si bien se observan muchos operadores, en realidad necesitamos solo unos
cuantos al iniciar, de los cuales ya hemos visto algunos como \(+\) y
\(=\). Para tener una buena idea de como se pueden usar véanse los
siguientes temas sobre operadores.

## Operadores aritméticos <a name="Oparit"></a>

Tal como su nombre lo indica son aquellos que conocemos por operaciones
matemáticas, el único que nos puede parecer extraño es el % el cual,
como se menciona en la tabla [\[tab:operadores\]](#tab:operadores) es el
operador “modulo”, en si divide un número *a* entre otro *b* y regresa
el residuo de esta división. Veremos como funcionan en el siguiente
ejemplo en el cual usaremos el operador *=* que se menciona a detalle en
[\[subsec:opasig\]](#subsec:opasig) , por el momento podemos decir que
funciona para “asignar” o dar un valor a una variable. Observe el
siguiente ejemplo:

``` java
OperadoresArit.java
```

Como se menciono anteriormente, las operaciones se realizan de izquierda
a derecha, ahora **experimenta** cambiando de lugar la variable a con la
b para ver como afecta el orden a las operaciones.  
Estos operadores también funcionan con otros tipos de datos básicos que
vimos, por ejemplo **experimenta** cambiando el int por un double y
observa las salidas, también cambia los valores de a y b a negativos
(agrega un - antes del numero y después del signo =).

## Operadores unarios  <a name="Opunar"></a>

Como su nombre lo indica, son aquellos que aplican sobre una sola
variable. De los operadores de incremento y decremento, es importante
marcar la diferencia entre los posfijos y prefijos como se muestra en la
siguiente lista:

  - **++** : Operador de incremento, aumenta el valor de la variable en
    1.
    
      - *Postfijo*: primero evalúa la variable y luego incrementa su
        valor.
    
      - *Prefijo*: primero incrementa su valor y luego evalúa la
        variable.

  - **\({--}\)** : Operador de decremento, reduce el valor de la
    variable en 1.
    
      - *Postfijo*: primero evalúa la variable y luego reduce su valor.
    
      - *Prefijo*: primero reduce su valor y luego evalúa la variable.

  - **-** : Da el valor negativo. Si era negativo será positivo.

  - **+** : Da el valor aritmético. Su uso es muy raro pero puede llegar
    a servir como se mostrará en un ejemplo mas adelante.

  - **\!** : Niega el valor de una variable, se usa con “booleanos” como
    se muestra en el ejemplo [\[prog:opunar\]](#prog:opunar).

  - **\(\sim\)** : Niega bit a bit los valores de una variable, este
    sera explicado a detalle en [\[subsec:opbitb\]](#subsec:opbitb) .

<!-- end list -->

``` java
OperadoresUnar.java
```

La secuencia de escape “`\n`” y otras más se explican en la sección
[\[subsec:secEsc\]](#subsec:secEsc) . El tipo de dato booleano “bool” se
explica en la siguiente bisección. Similarmente al ejemplo anterior,
**experimenta** cambiando de lugar la variable *a* con la *b* para ver
como afecta el orden a las operaciones que le dan un valor a *c*.  
**Experimenta** cambiando el int por un double y observa las salidas,
también cambia los valores de a y b.

## Operadores relacionales y los booleanos  <a name="Opbool"></a>

Los operadores relacionales son aquellos que analizan una relación y
resuelven el si esta es verdadera o falsa.  
Mencionando esta condición de verdad o falsa, también se presenta un
nuevo tipo de dato: el booleano. Cuyo nombre viene del matemático
*George Boole* quien creo un álgebra basada completamente en 1 y 0, o
bien pues verdadero o falso, entre otros posibles nombre.  
El tamaño en bytes de un dato de tipo booleano depende mucho de la
maquina virtual que usa java, la cual también puede verse afectada por
cosas como arquitectura de computadora entre otros detalles. Lo que se
mantiene cierto es que solo puede tomar 1 valor a la vez, el cual se le
puede asignar con las palabras reservadas *true* y *false*. Se hablara
más de estas palabras en la siguiente sección
[\[sec:palabras\]](#sec:palabras) .  
Conociendo esto se explican las características de cada operador:
*instanceof*.

  - **\(<\)** : verifica que el valor de la izquierda es menor que el de
    la derecha.

  - **\(>\)** : revisa que el valor de la izquierda es mayor que el de
    la derecha.

  - **==** : analiza si el valor de la izquierda es igual al de la
    derecha. Es importante **no confundir** este operador con el = de
    **asignación**.

  - **\(!=\)** : checa que el valor de la izquierda es diferente al de
    la derecha.

  - **\(<=\)** : verifica que el valor de la izquierda es menor o igual
    al de la derecha.

  - **\(>=\)** : revisa que el valor de la izquierda es mayor o igual al
    de la derecha.

  - **instanceof** : revisa si el objeto de la izquierda es una
    instancia o puede representarse como una clase de la derecha.

Observa el siguiente código para tener una idea mejor de los booleanos.

``` java
OperadoresRela.java
```

Como se observa, los resultados devueltos son de tipo booleano.  
Ahora **experimenta** con los valores de a y b para ver como se analizan
de forma diferente.

## Operadores lógicos  <a name="Oplogi"></a>

Estos operadores son aquellos que se encargan de la lógica y las
evaluaciones, vimos brevemente en [\[subsec:opunar\]](#subsec:opunar) al
operador negación “\!”. Observa las tablas de a continuación para ver
como se evalúan según los operandos, donde V es Verdadero y F es Falso.

| **a** | **b** | **\(||\)** |
| :---: | :---: | :--------: |
|   F   |   F   |     F      |
|   V   |   F   |     V      |
|   F   |   V   |     V      |
|   V   |   V   |     V      |

| **a** | **b** | **&&** |
| :---: | :---: | :----: |
|   F   |   F   |   F    |
|   V   |   F   |   F    |
|   F   |   V   |   F    |
|   V   |   V   |   V    |

| **a** | **\!a** |  |
| :---: | :-----: | :-: |
|   F   |    V    |  |
|   V   |    F    |  |

  
Ejecuta el siguiente código para ver el comportamiento de estos
operadores.

``` java
OperadoresLogi.java
```

Ahora **experimenta** cambiando los valores de a y b, *recuerda que un
boolean solo toma true ó false*.

## Operadores bit a bit  <a name="Opbit"></a>

Estos operadores pueden parecer un poco mas complicados, pero su
funcionamiento es similar a la de los operadores lógicos, solo que se
usa 1 para representar verdad y 0 para falso, en base en esto se
representan los numeros en base binaria, y se operan.  
Cuando mencionamos los tamaños de bytes en
[\[subsec:datb\]](#subsec:datb) de cada dato, también se mencionó que se
componían de bits, estos se suelen analizar de derecha a izquierda, se
cuentan empezando desde 0, y si tienen valor de 1 se eleva 2 al valor de
su posición y se suma al total que vale.  
Por ejemplo: 1101, de derecha a izquierda tenemos un 1 en la posición 0,
un segundo 1 en la posición 2, y un ultimo 1 en la posición 3, entonces
el valor de 1101 sera \(2^0+ 0 + 2^2 +2^3 = 1+ 4 +8 = 13\). Conociendo
esto se enlista como funciona cada operador, tomando en cuenta que como
su nombre lo marca, operan cada **bit** de a por otro **bit** de b en la
misma posición, el número en binario que obtienen al final es el que
regresan.

  - **&** : hace la misma operación que el operador && pero con cada
    bit.

  - **\(|\)** : hace la misma operación que el operador \(||\) pero con
    cada bit.

  - **^** : regresa 1 *solo si* los 2 bits que esta analizando son
    diferentes.

  - **\(\sim\)** : aplica la operación de \! en cada bit de la
    variable..

Hasta el momento hemos visto que se da el valor tal cual a la variable,
pero también hay otras formas de asignarles valores, ahora veremos que
se puede separar un valor con guiones bajos \_ así como representarlos
en forma binaria poniendo “0b” al inicio del número a representar en esa
base.  
Corre el siguiente programa para ver lo anterior en acción.

``` java
OperadoresBits.java
```

Observa que el operador \(\sim\) regreso un valor negativo, esto es por
la forma en que se representan los valores negativos en binario, donde
al tener una cantidad de bits limitados, se optó por dividir la cantidad
de números representables a la mitad más uno para los negativos.  
Como muestra la representación binaria gracias al método
*toBinaryString()* de *Integer*, no cuesta más que invertir **todos**
los bits que contiene el tipo de dato, para obtener el valor original en
negativo menos 1 extra.  
Nota como el operador unario + no es totalmente inútil, si en este
ejemplo eliminas el + al lado de la a o b veras que el programa escribe
su representación como carácter, en lugar de número.  
**Experimenta** cambiando los valores de a y b para ver como cambian los
resultados, también intenta hacer la representación a mano de los
números en binario y las operaciones para tener una mejor idea de como funcionan.

## Operadores de desplazamiento de bits o shift  <a name="Opdespl"></a>

Estos operadores actúan sobre la representación en binario del tipo de
dato que usemos, siendo cada uno un poco diferente:

1.  **\(<<\)** : Mueve los bits hacia la izquierda agregando 0s por la
    derecha.

2.  **\(>>\)** : Mueve los bits hacia la derecha agregando 0s o 1s, por
    la izquierda, si el valor original es positivo o negativo
    respectivamente.

3.  **\(>>>\)** : Mueve los bits hacia la derecha agregando 0s por la
    izquierda, ignora si el valor era negativo y regresa su
    representación en positivo.

Ve el siguiente ejemplo:

``` java
OperadoresDespl.java
```

Similarmente a los operadores anteriores **experimenta** con los valores
para observar las distintas representaciones.

## Operadores de asignación  <a name="Opasig"></a>

Como su nombre lo indica, son aquellos que asignan un valor a otro.
Hasta el momento hemos estado utilizando =, pero también podemos mezclar
este junto la mayoría de los operadores vistos anteriormente para
ahorrar pasos a la hora de escribir. Todos siguen el mismo formato donde
”a *operador*= b” es lo mismo que ”a = a *operador* b”.  
Hablando del operador \(=\) que tanto hemos usado, este hace tal cual lo
que menciona, donde hace que la variable de la izquierda tenga lo mismo
que lo de la derecha. Es importante asegurarse de que es compatible el
valor que queremos asignar, inclusive usando una conversión explicita en
la forma de “(*tipo\_de\_dato*)”, ya que si asignamos un valor no
valido, nuestro programa puede fallar.  
Observa el siguiente ejemplo de operadores:

``` java
public class OperadoresAsig
{
  public static void main(String[] args)
  {
    int a=1, b=-10;
    a += 1;
    System.out.println(" a += 1 = " + (a));
    a -= b;
    System.out.println(" a -= b = " + (a));
    a *= b;
    System.out.println(" a *= b = " + (a));
    a /= b;
    System.out.println(" a /= b = " + (a));
    a %= b;
    System.out.println(" a %= b = " + (a));
    a &= b;
    System.out.println(" a &= b = " + (a));
    a ^= b;
    System.out.println(" a ^= b = " + (a));
    a |= b;
    System.out.println(" a |= b = " + (a));
  }
}
```

**Experimenta** con los valores de a y b. Se deja como ejercicio agregar
los últimos tres operadores de asignación, de los cuales se debe notar
que pasa al pedir que se muevan los bits en una cantidad negativa.

## Operador ternario  <a name="Optern"></a>

Este operador aunque puede parecer algo confuso, es muy útil para
asignar valores al crearlos, además de ser más rápido que usar su
equivalente en *if* y *else* que se vera más adelante.  
Funciona con la siguiente estructura: *condición* ? a : b. Lo cual se
puede leer como: si *condición* es cierta, entonces regresa el valor de
a, si no, el valor de b. Analiza el siguiente ejemplo:

``` java
OperadoresTern.java
```

Dado que este operador tiene la precedencia casi más baja, se debe usar
paréntesis para asegurar el orden en que se realizan las operaciones.  
Como los ejercicios anteriores, *experimenta* con los valores de a y b
para ver como cambia el resultado.
