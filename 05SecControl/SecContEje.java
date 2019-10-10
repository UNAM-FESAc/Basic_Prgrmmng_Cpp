import java.util.Random;  /*Esta es una libreria, la cual contiene utilidades para hacer cosas con numeros pseudo-aleatorios */

public class SecContEje
{
    public static void main(String[] args)
    {
	    Random rand = new Random(552); //5523 da 2, 552 da 4
      	int i, var = rand.nextInt(4) +2;
  	    System.out.println("El numero aleatorio obtenido es " + var);
  	    
  		if(var>3) 
        	System.out.println(var +" es mayor que 3");
        else if (var==3) //esta combinacion funciona como un if
        	System.out.println(var +" es igual a 3");
  		else
          	System.out.println(var +" es menor que 3");
  
  		for(i=0;i<var;i++)
        {
        	System.out.println(i);
        }
  
  		while(var>3)
        {
        	System.out.println("While repetira esto hasta ser falso lo que esta entre parentesis. ");
          	System.out.println("Podemos salir cuando queramos de una secuencia de control, usando break");
          	break;
        }
  
  		i=0; //Tenemos que regresar a 0 el entero i.
  		do //Los bucles/loops atoran el programa al dejarlo encerrado
        { //haciendo las mismas operaciones
        	System.out.println("Las secuencias de control pueden causar bucles si no se cuidan");
          	if(i++ >3)
            	break;
          
        }while(var>3); 
    } //es recomendable revisar que no se tengan loops
}
