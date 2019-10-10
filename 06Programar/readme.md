# Pensando en código

Hasta el momento ya se han mostrado los componentes fundamentales del
lenguaje con los que podemos hacer operaciones y acciones básicas. Ahora
se mostraran formas de expandir nuestro conocimiento con las ideas de
programación en general, aprovechando el paradigma destacable de Java
para generalizar componentes que necesitemos y con los cuales se pueda
experimentar aun más fuera de este manual.

## Pseudocódigo

En este manual hemos estado estudiando nada mas el lenguaje de Java,
pero que pasa cuando queremos darle indicaciones o algoritmos a una
persona que no maneja Java o el mismo lenguaje de programación que
nosotros.  
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
operaciones del algoritmo.

  - Usa flechas para mostrar asignación de un valor a otro, siendo la
    punta de la flecha el dato que recibe un valor.

  - Puede omitir delimitadores del texto, por ejemplo { } o ’;’, entre
    otros, pero requiere conservar una estructura y espaciado para dar a
    entender el contexto y el orden de las operaciones.

  - Suele usar espacios o tabulaciones para acomodar el texto y mostrar
    una jerarquía.

  - También puede omitir el tipo de dato, especificándolo solo por el
    contexto.

Entre otras características que pueden ser especificas del ambiente
donde se use.

## Usando POO en java

Como se mencionó anteriormente, java usa el Paradigma Orientado a
Objetos para llevar la estructura y lógica del programa. Ahora veamos
los elementos que se mencionaron anteriormente en la sección
[\[subsec:POO\]](#subsec:POO) y como se ven usados en Java.  
Para empezar se enlistan las 4 propiedades importantes del POO:
  - **Encapsulamiento**: como se mencionó, consiste en restringir partes
    del objeto a otros elementos (private, public).

  - **Abstracción**: Es la generalización de los elementos a encerrar en
    *clases* (class).

  - **Herencia**: Para no volver a repetir código, se pueden usar las
    clases ya creadas, esto se puede hacer al *heredarles* a otras
    clases. Los constructores y destructores se usan pero no se heredan.
    Los elementos declarados como *private* tampoco se heredan. Los
    elementos public si.

  - **Polimorfismo**: Esto es el dar un uso distinto a una misma
    función, se puede lograr al *sobreescribir* las funciones heredadas
    por ejemplo.

Ejemplo de abstraer un objeto que da un mensaje y el encapsulamiento:

``` java
ObjetosJava.java
```

Ahora veamos un ejemplo con herencia y polimorfismo:

``` java
Principal.java
```

Como se menciona en el comentario, la función *es()* lleva exactamente
el mismo nombre, parámetros y tipo (public void), sin embargo, lo que
hace es distinto que la función padre. Y al correr el código el hijo
usara la función de *es()* que define. Se deja como ejercicio borrar la
función en el hijo y correr el código para observar como desaparece el
polimorfismo.

## Memoria

A veces conocemos la cantidad de información a guardar, en otras
ocasiones no, pero al menos es importante entender la naturaleza de la
misma para poder administrarla.  
Para esto existe:

  - <span>La memoria estática</span>: La cual es común cuando conocemos
    la cantidad de información y su máximo a utilizar. Suele usarse en
    forma de “arreglos” (arrays), las cadenas de caracteres, y los
    conjuntos de números son los más populares. Pueden hacerse arreglos
    con corchetes \[\] después del tipo de variable, colocando un número
    para dar la cantidad máxima a usar, o dejando los corchetes pero
    definiendo en su momento todos los elementos que irán.

  - <span>La memoria dinámica</span>: Esta se usa cuando desconocemos la
    cantidad, sirve para pedir en el momento que lo requerimos espacio
    de almacenamiento, tiene mucho uso gracias a lo que su nombre
    indica. Un ejemplo que hemos estado usando es el *String*, este es
    un arreglo de caracteres dinámico, esto es, le podemos quitar y/o
    agregar sin preocuparnos de haber definido una cantidad máxima de
    letras.

Una mezcla de estos dos tipos de memoria es el *String\[\] args* que se
ha estado usando en las funciones *main* de cada programa. Donde se esta
diciendo que se toma un arreglo de Strings, o un arreglo de arreglos de
caracteres, es útil definir nombres y usos para evitar confusiones, como
se puede notar en esta ultima forma de llamar a *String\[\] args*.
