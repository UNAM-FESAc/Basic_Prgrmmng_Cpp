# Pensando en código

Hasta el momento ya se han mostrado los componentes fundamentales del
lenguaje con los que podemos hacer operaciones y acciones básicas. Ahora
se mostraran formas de expandir nuestro conocimiento con las ideas de
programación en general.

## Pseudocódigo

En este manual solo hemos estado estudiando el lenguaje de C++, pero
¿que pasa cuando queremos darle indicaciones o algoritmos a una persona
que no maneja C++ o el mismo lenguaje de programación que nosotros?  
Para esto se tiene el pseudocódigo como una herramienta que permite
concentrarse enteramente en el procedimiento, dejando de lado aquellos
detalles que sean más específicos de cada lenguaje.  
El pseudocódigo considera una estructura similar al código pero usando
un lenguaje más parecido a un instructivo, así el código y/o algoritmo
es legible por cualquier persona sin importar que lenguaje de
programación use.  
  
Ejemplo:

    funcionUno(tipo Algo,tipo2 otro)
        tipo extra <- Algo
        if extra = Algo
            then imprime(otro)
    return Algo

Como se puede observar, el pseudocódigo contempla unos elementos que
simplifican la sintaxis y permiten entender mejor las partes y
operaciones del algoritmo:

  - Usa flechas para mostrar asignación de un valor a otro, siendo la
    punta de la flecha el dato que recibe un valor.

  - Puede omitir delimitadores del texto, por ejemplo “{ }” o “;”, entre
    otros, pero requiere conservar una estructura y espaciado para dar a
    entender el contexto y el orden de las operaciones.

  - Suele usar espacios o tabulaciones para acomodar el texto y mostrar
    una jerarquía.

  - También puede omitir el tipo de dato, especificándolo solo por el
    contexto.

Entre otras características que pueden ser especificas del ambiente
donde se use.

# Memoria

Parte de la programación es la información, por lo que nos interesa
tanto usarla, como almacenarla, y a veces conocemos la cantidad a
guardar, en otras ocasiones no, pero al menos es importante entender la
naturaleza de la misma para poder administrarla.  
Para esto existe:

  - <span>La memoria estática</span>: La cual es común cuando conocemos
    la cantidad de información y su máximo a utilizar. Suele usarse en
    forma de “arreglos” (*arrays*), las cadenas de caracteres, y los
    conjuntos de números son los más populares. Pueden hacerse arreglos
    con corchetes \[\] después del tipo de variable, colocando un número
    para dar la cantidad máxima a usar, o dejando los corchetes pero
    definiendo en su momento todos los elementos que irán.

  - <span>La memoria dinámica</span>: Esta se usa cuando desconocemos la
    cantidad de datos, sirve para pedir espacio de almacenamiento en el
    momento que lo requerimos, tiene mucho uso gracias a lo que su
    nombre indica. Un ejemplo que veremos son *String*s, los cuales son
    un arreglo de caracteres dinámico, esto es, le podemos quitar y/o
    agregar sin preocuparnos de haber definido una cantidad máxima de
    letras.

Veamos un uso de la memoria estática con datos que ya conocemos:

``` c++
memoriaSta.cpp
```

Observa como tenemos que usar corchetes “\[\]” y un numero entre ellos
para acceder al valor del arreglo estático, mientras que al
inicializarlo podemos optar entre colocar o no un número para
especificarle el tamaño, solo que debemos colocar la misma cantidad de
elementos **o menos** si le damos un número. **Nota** que si bien
mencionamos *6* como el numero de elementos al inicializar el *int*,
**empezamos con 0** y en realidad **terminamos con 5**, esto es porque
el 0 es el espacio de memoria inicial, así que presta atención a como
hagas las cuentas en el futuro, ya que si intentas acceder a un espacio
de memoria que no esta usando tu programa (o que bien no has declarado),
tu programa fallara. Prueba esto cambiando los valores del *for* así
como la cantidad de elementos del arreglo con tamaño especificado.  
Una mezcla de memoria dinámica con estática es *string\[\] args* donde
considera que requiere un número de espacios de memoria dinámica. El
dato *string* esta definido en la librería “*string*”, observa el
siguiente ejemplo:

``` c++
memoriaDin.cpp
```

También presta atención a como se usa la palabra reservada *auto* para
darle una nueva estructura a la secuencia de control *for* y simplificar
nuestro código.

## Apuntadores

Dado que ya hablamos de los tipos de memoria, ahora vamos a ver que
podemos realizar sobre la misma. Este tema puede ser algo complicado,
por lo que se recomienda poner buena atención, ya que también trae gran
potencial con sigo mismo.  
Toda la información se almacena con el fin de poder usarla, aunque sea
temporalmente como lo hemos estado haciendo en programas hasta el
momento, y la forma en que se almacena en la memoria de las computadoras
es por *direcciones*, como si de casas en la vida real se tratara. Estas
direcciones son tal cual el espacio en específico donde se encuentra la
información, y como tales, existen otros elementos que pueden apuntar a
ellas o llevar sus datos, estos son los **apuntadores** observa el
siguiente ejemplo donde al fin usamos los operadores de
referencia/dirección (“&”) y desreferencia/indirección (“\(*\)”):

``` c++
apuntadorOperadores.cpp
```

Observa como se usa el mismo operador de indirección tanto para declarar
un apuntador, como para traer la información que contiene. Este operador
puede resultar ser el más complicado por estos dos usos, así como
también pueden existir apuntadores de apuntadores.  
Para dar mas claridad a esto, hay que entender que un apuntador es
específicamente un espacio de memoria que guarda la dirección de otro
espacio de memoria. Estos espacios de memoria siguen necesitando un tipo
de dato, ya que como vimos en [\[sec:datb\]](#sec:datb) , cada tipo de
dato tiene un tamaño diferente en *bytes*, y este tamaño es lo que
necesita conocer la computadora para guardar correctamente la
información, sin chocar con la memoria de su alrededor.  
El operador de referencia o dirección conserva su significado, donde
siempre da la dirección en memoria del dato, ya sea un *int*, apuntador
a un *int*, o apuntador de apuntador, etc.  
Como sucede con los demás datos, necesitamos operar entre tipos de
memoria compatibles, solo que en este caso no hay conversiones que nos
salven de incompatibilidades, por lo que se debe ser especifico en el
tipo de dato y en que nivel de apuntador a apuntador se tiene. Analiza
el siguiente ejemplo donde se usa un apuntador de un apuntador:

``` c++
apuntadorCambioMemoria.cpp
```

Por más veces que corras el código, podrás ver que las direcciones que
tienen los *int*s al inicio son los mismos en el resto del programa, en
cambio un apuntador puede cambiar la dirección a la que apunta, pero
sigue teniendo su propio espacio dentro de la memoria, el cual obtenemos
con el operador de dirección, siendo así capaces de alterar los
contenidos de un apuntador.  
**Experimenta** agregando otro operador de indirección \(*\) en las
variables a y b en la linea, 4
y analiza que estas afectando en esa oración.  
  
Si realizaste lo anterior, podrás ver que sí afectamos al dato *var*
dentro de la función, lo cual mencionamos que no podías hacer si lo
pasabas como un parámetro normal en [\[sec:Func\]](#sec:Func) . Observa
algo que podemos hacer gracias a esto:

``` c++
apuntadorIntercambia.cpp
```

Teniendo esta capacidad de cambiar y modificar espacios de memoria,
podemos realizar más acciones que necesiten orden en la memoria, así
como otras alteraciones especificas de memoria como el manejo de
archivos, e inclusive dispositivos, entre otras cosas.
