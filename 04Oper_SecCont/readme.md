# Operadores y secuencias de control

Para asociar valores unos con otros, como por ejemplo sumas, relaciones,
lógica, etc... , requerimos hacer operaciones tal como en matemáticas,
es de esta manera como se definen signos y palabras, conocidos como
**operadores**.  
Esta lógica de relacionar tambien nos permite darle un sentido y
dirección a nuestros programas, como por ejemplo tomar en cuenta casos,
o inclusive hacer menús de selección en base a lo que nos de el
usuario.  
  
Este capitulo es importante por dichas razones, por lo que se le invita
al lector a poner buena atención e intentar practicar lo aprendido, así
como verificar que todo sea cierto, y no tomarlo por garantizado.

## Operadores y su tabla de precedencia

En C++ para hacer operaciones se necesita un orden en el que se hagan,
como en las matemáticas, así que en C++ los operadores con misma
precedencia son evaluados de izquierda a derecha, excepto los de
prioridad 3,15 y 16, que a continuación se presentan en una [tabla](https://en.cppreference.com/w/cpp/language/operator_precedence) con el
orden de prioridad que siguen los operadores, siendo 1 la mas alta.

Si bien se observan muchos operadores, en realidad necesitamos solo unos
cuantos al iniciar, de los cuales ya hemos visto algunos como \(+\) y
\(=\). Para tener una buena idea de como se pueden usar véanse los
siguientes temas sobre los principales operadores que se contemplan en
el nivel de este manual.

## Operadores aritméticos

Tal como su nombre lo indica son aquellos que conocemos por operaciones
matemáticas, el único que nos puede parecer extraño es el % el cual,
como se menciona en la tabla [\[tab:operadores\]](#tab:operadores) es el
operador “modulo”, en si divide un número *a* entre otro *b* y regresa
el residuo de esta división. Veremos como funcionan en el siguiente
ejemplo en el cual usaremos el operador *=* que se menciona a detalle en
[\[sec:opasig\]](#sec:opasig) , por el momento podemos decir que
funciona para “asignar” o dar un valor a una variable. Observe el
siguiente ejemplo:

``` c++
OperadoresArit.cpp
```

Como se menciono anteriormente, las operaciones se realizan de izquierda
a derecha, ahora **experimenta** agrega otra variable en las operaciones
para ver como se afecta el orden de las mismas (no olvides incluir el
operador entre las variables).  
Estos operadores también funcionan con otros tipos de datos básicos que
vimos, por ejemplo **experimenta** cambiando el int por un double y
observa las salidas, también cambia los valores de a y b a negativos
(usa el operador unario - como prefijo en el valor a asignar a la
variable).

## Operadores unarios

Son aquellos que aplican sobre una sola variable. De los operadores de
incremento y decremento, es importante marcar la diferencia entre los
posfijos y prefijos como se muestra en la siguiente lista:

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

  - **\!** : Niega el valor de una variable, se usa con “booleanos” pero
    también funciona con números como se muestra en el ejemplo
    [\[prog:opunar\]](#prog:opunar).

  - **\(\sim\)** : Niega bit a bit los valores de una variable, este
    sera explicado a detalle en [\[sec:opbitb\]](#sec:opbitb) .

<!-- end list -->

``` c++
OperadoresUnar.cpp
```

La secuencia de escape “\\n” y otras más se explican en la sección
[\[sec:secEsc\]](#sec:secEsc) . El tipo de dato booleano “bool” se
explica en la siguiente sección. Similarmente al ejemplo anterior,
**experimenta** cambiando de lugar la variable *a* con la *b* para ver
como afecta el orden a las operaciones que le dan un valor a *c*.  
**Experimenta** cambiando el int por un double y observa las salidas,
también cambia los valores de a y b.

## Operadores relacionales y los booleanos

Los operadores relacionales son aquellos que analizan una relación y
resuelven el si esta es verdadera o falsa.  
Mencionando esta condición de verdad o falsa, también se presenta un
nuevo tipo de dato: el booleano. Cuyo nombre viene del matemático
*George Boole* quien creo un álgebra basada completamente en 1 y 0, o
bien pues verdadero o falso, entre otros posibles nombre.  
En C++ el tamaño en bytes de un dato de tipo booleano depende mucho de
la implementación, esto es que varia, por lo general se marca como 1
byte, pero no se puede garantizar, ya que puede verse afectada por cosas
como la arquitectura de la computadora entre otros detalles. Lo que se
mantiene cierto es que un bool solo puede tomar 1 valor a la vez, el
cual se le puede asignar con un valor, siendo el 0 falso y el resto
verdadero, o usando las palabras reservadas *true* y *false*. Se hablara
más de estas palabras en la siguiente sección
[\[sec:palabras\]](#sec:palabras) .  
Conociendo esto se explican las características de cada operador:

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

Observa el siguiente código para tener una mejor idea de los booleanos.

``` c++
OperadoresRela.cpp
```

Como se observa, los resultados devueltos son de tipo booleano.  
Ahora **experimenta** con los valores de a y b para ver como se analizan
de forma diferente.

## Operadores lógicos

Estos operadores son aquellos que se encargan de la lógica y las
evaluaciones, vimos brevemente en [\[sec:opunar\]](#sec:opunar) al
operador negación “\!”. Observa las tablas de a continuación para ver
como se evalúan según los operandos, donde V es Verdadero y F es
Falso.  

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

``` c++
OperadoresLogi.cpp
```
## Operadores bit a bit

Estos operadores pueden parecer un poco complicados, pero su
funcionamiento es similar a la de los operadores lógicos, solo que los
números se operan en su representación en base binaria.  
Cuando mencionamos los tamaños de bytes en [\[sec:datb\]](#sec:datb) de
cada dato, también se mencionó que se componían de bits, estos se suelen
analizar de derecha a izquierda, se cuentan empezando desde 0, y si
tienen valor de 1 se eleva 2 al valor de su posición y se suma al total
que vale.  
Por ejemplo: 1101, de derecha a izquierda tenemos un 1 en la posición 0,
un segundo 1 en la posición 2, y un ultimo 1 en la posición 3, entonces
el valor de 1101 sera \(2^0+ 0 + 2^2 +2^3 = 1+ 4 +8 = 13\). Conociendo
esto se enlista como funciona cada operador, tomando en cuenta que como
su nombre lo marca, operan cada **bit** de \(a\) por otro **bit** de
\(b\) en la misma posición, el número en binario que obtienen al final
es el que regresan.

  - **&** : hace la misma operación que el operador && pero con cada
    bit.

  - **\(|\)** : hace la misma operación que el operador \(||\) pero con
    cada bit.

  - **\(\wedge\)** : regresa 1 *solo si* los 2 bits que esta analizando
    son diferentes.

  - **\(\sim\)** : aplica la operación de \! en cada bit de la
    variable..

Estas operaciones son muy útiles cuando se lidia con aspectos delicados,
como ahorrar memoria al operar verdaderos y falsos sobre un solo valor,
así como otras artimañas avanzadas. En el siguiente programa se muestran
las operaciones y sus representaciones, no te preocupes si no entiendes
la función *imprimir\_binarios* ya que es algo avanzada, solo
concéntrate en entender las operaciones de *main*.

``` c++
OperadoresBits.cpp
```

Observa que el operador \(\sim\) regreso un valor negativo, esto es por
la forma en que se representan los valores negativos en binario, donde
al tener una cantidad de bits limitados, se optó por dividir la cantidad
de números representables a la mitad más uno para los negativos.  
Como muestra la representación binaria gracias a la función
*imprimir\_binarios*, no cuesta más que invertir **todos** los bits que
contiene el tipo de dato, para obtener el valor original en negativo
menos 1 extra.  
**Experimenta** cambiando los valores de a y b para ver como cambian los
resultados, así como su tipo de dato , e intenta hacer la representación
a mano de los números y las operaciones en binario para tener una mejor
idea de como funcionan.
Ahora **experimenta** cambiando los valores de a y b.

## Operadores de desplazamiento de bits o shift

Estos operadores actúan sobre la representación en binario del tipo de
dato que usemos, siendo cada uno un poco diferente:

  - **\(<<\)** : Mueve los bits hacia la izquierda agregando 0s por la
    derecha.

  - **\(>>\)** : Mueve los bits hacia la derecha agregando 0s o 1s, por
    la izquierda, si el valor original es positivo o negativo
    respectivamente.

Ve el siguiente ejemplo:

``` c++
OperadoresDespl.cpp
```

Similarmente a los operadores anteriores **experimenta** con los valores
para observar las distintas representaciones.

## Operadores de asignación

Como su nombre lo indica, son aquellos que asignan un valor a otro.
Hasta el momento hemos estado utilizando =, pero también podemos mezclar
este junto la mayoría de los operadores vistos anteriormente para
ahorrar pasos a la hora de escribir. Todos siguen el mismo formato donde
“a *operador*= b” es lo mismo que “a = a *operador* b”.  
Hablando del operador \(=\) que tanto hemos usado, este hace tal cual lo
que menciona, donde hace que la variable de la izquierda tenga lo mismo
que lo de la derecha. Es importante asegurarse de que es compatible el
valor que queremos asignar, inclusive usando una conversión explicita en
la forma de “(*tipo\_de\_dato*)”, ya que si asignamos un valor no
valido, nuestro programa puede fallar.  
Observa el siguiente ejemplo de operadores:

``` c++
OperadoresAsig.cpp
```

**Experimenta** con los valores de a y b. Se deja como ejercicio agregar
los últimos dos operadores de asignación, de los cuales se debe notar
que sucede al pedir que se muevan los bits en una cantidad negativa.

## Operador ternario

Este operador aunque puede parecer algo confuso, es muy útil para
asignar valores al crearlos, además de ser más rápido que usar su
equivalente en *if* y *else* que se vera más adelante.  
Funciona con la siguiente estructura: *condición* ? a : b. Lo cual se
puede leer como: si *condición* es cierta, entonces regresa el valor de
a, si no, el valor de b. Analiza el siguiente ejemplo:

``` c++
OperadoresTern.cpp
```

Dado que este operador tiene la precedencia casi más baja, se debe usar
paréntesis para asegurar el orden en que se realizan las operaciones.  
Como los ejercicios anteriores, *experimenta* con los valores de a y b
para ver como cambia el resultado.

# Secuencias de control básicas

Como se ha ido viendo, programar es hacer instrucciones para la
computadora, pero ¿como hacemos que entienda casos o repita acciones?
Para esto sirven las secuencias de control. Estas nos permiten, como su
nombre lo indica, darle un sentido y seriación a nuestro programa de
forma menos lineal. A continuación se presentan las principales de C++
que también son comunes en otros lenguajes.

## if, else

Traducido como: si, si no. *if* es una secuencia básica de control que
toma verdadero o falso, siendo que si la condición entre paréntesis es
cierta, se hará lo que delimita *if*, si no, se ignora o se hace lo que
se coloque en un *else* después del caso de *if*. Observa el siguiente
ejemplo:

``` c++
SecContIfElse.cpp
```

Esta secuencia se puede expandir y facilitar con un *switch* cuando se
tendrían muchos *if* y *else*, este *switch* toma la condición a
comparar y corre los casos bajo los que la condición sea igual a la
respuesta, observa la sintaxis de esta secuencia en el ejemplo y
compáralo al anterior:

``` c++
SecContSwitch.cpp
```

Como podrás ver, el switch toma un valor entre paréntesis y verifica que
hacer entre corchetes, siendo cada *case* un caso (tal cual la
traduccion), en donde realiza acciones hasta llegar a un *break*. Fíjate
también como ahora nos limitamos a valores específicos, es por esto que
se debe considerar bien que secuencia sirve mas en ciertos casos.

## for

Traducido como: para. Se suele usar *for* para realizar operaciones
desde un valor hasta otro, por ejemplo desde 0 hasta 5, o inclusive en
forma descendiente, observa el siguiente ejemplo:

``` c++
SecContFor.cpp
```

Como puedes ver en el ejemplo, la sintaxis de un *for* entre paréntesis
es primero la declaración de un valor a usar, en medio la comparación o
condición con la que se termina, y al final un aumento (o decremento)
del valor que usamos, siendo separados estos elementos por punto y coma.

## while

Traducido como: mientras. Hace algo mientras sea verdad el análisis o la
condición dada entre paréntesis, osea que no valga 0 o *false*.

``` c++
SecContWhile.cpp
```

Observa como la palabra *break* se puede usar en otras secuencias de
control, no solamente en un *switch*.

## do while

Traducido como: haz mientras. Similar a while pero ejecuta las
instrucciones al menos 1 vez.

``` c++
SecContDoWh.cpp
```

Se invita al lector a probar varias veces los códigos para ver como se
genera un valor nuevo gracias a la función *rand()*. También se deben
modificar las secuencias de control para ganar un mejor entendimiento de
las mismas.  
Como se menciona en los comentarios del código, los bucles pueden causar
problemas inesperados, este caso es sencillo pero existen otros en donde
ya no sabemos que pasa con la variable, por ejemplo cuando el usuario
debe ingresar el valor, y no tomamos en cuenta algo de lo que llega a
escribir, es por ello que se debe tomar en cuenta un cierre para el
programa siempre.
