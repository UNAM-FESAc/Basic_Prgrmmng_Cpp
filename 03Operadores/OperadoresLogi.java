public class OperadoresLogi
{
  public static void main(String[] args)
  {
    boolean a= true, b=false;
    System.out.println(" a && b  = " + (a && b) );
    System.out.println(" a || b  = " + (a || b) );
    //ahora usando el operador de negacion
    System.out.println(" !b  = " + (!b) );
    System.out.println(" a && !b  = " + (a && !b) );
    System.out.println(" !a || b  = " + (!a || b) );
  }
}
