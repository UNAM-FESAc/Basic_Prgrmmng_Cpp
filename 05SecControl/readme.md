# Secuencias de control básicas

Como se ha ido viendo, programar es hacer instrucciones para la
computadora, pero ¿como hacemos que entienda casos o repita acciones?
Para esto sirven las secuencias de control. Estas nos permiten, como su
nombre lo indica, darle un sentido y seriación a nuestro programa de
forma menos lineal. A continuación se presentan las principales de Java
que también son comunes en otros lenguajes.

  - **if,else** (si,si no): secuencia básica de verdadero o falso, se
    puede expandir a un “switch” cuando se tendrían muchos if y else,
    este switch toma la condición a comparar y corre los casos bajo los
    que la condición sea igual a la respuesta.

  - **for** (para): se suele usar para realizar operaciones desde un
    valor hasta otro, por ejemplo desde 0 hasta 5.

  - **while** (mientras): hace algo mientras sea verdad el análisis o la
    condición dada.

  - **do while** (haz mientras): similar a while pero ejecuta las
    instrucciones al menos 1 vez.

A continuación se presenta un ejemplo donde se implementan estas
secuencias de control:

``` java
SecContEje.java
```

Se invita al lector a cambiar el número 552 por el comentado para
observar como cambia el código. También se pueden omitir unas y otras
secuencias de control así como modificarlas para ganar un mejor
entendimiento de las mismas.  
Como se menciona en los comentarios del código, los bucles pueden causar
problemas inesperados, este caso es sencillo pero existen otros en donde
ya no sabemos que pasa con la variable, por ejemplo cuando el usuario
debe ingresar el valor, y no tomamos en cuenta algo de lo que llega a
escribir.
