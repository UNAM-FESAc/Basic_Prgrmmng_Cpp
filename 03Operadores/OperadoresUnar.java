public class OperadoresUnar
{
  public static void main(String[] args)
  {
    int a= -1, b= 0, c=0; 
    boolean bool= true; //dato de verdadero y falso
    
    System.out.println("Operadores postfijos");
    System.out.println("a++ = " + (a++) );
    System.out.println("a = " + a );
    System.out.println("a-- = " + (a--) );
    System.out.println("a = " + a );
    System.out.println("\nOperadores prefijos");
    // el \n anterior es una secuencia de escape
    System.out.println("b = " + b );
    System.out.println("++b = " + (++b) );
    System.out.println("b = " + b );
    System.out.println("--b = " + (--b) );
    System.out.println("b = " + b );
    //Observa bien el siguiente enunciado
    c = a++ + ++b;
    System.out.println("\nc = " + c );
    
    System.out.println("\nOperador unario !");
    System.out.println("!bool = " + !bool);
  }
}
