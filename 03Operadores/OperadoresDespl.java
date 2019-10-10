public class OperadoresDespl
{
  public static void main(String[] args)
  {
    char a=0b0001_0011_1001;
    int b=-10;
    System.out.println(" a = " + (+a) 
         + " = " +Integer.toBinaryString(a) );
    System.out.println(" b = " + (+b) 
         + " = " +Integer.toBinaryString(b) );
    System.out.println("\nOperador <<");
    System.out.println(" a << 2  = " + (a << 2) 
         + " = " +Integer.toBinaryString(a << 2));
    System.out.println(" b << 2  = " + (b << 2) 
         + " = " +Integer.toBinaryString(b << 2));
    System.out.println("\nOperador >>");
    System.out.println(" a >> 2  = " + (a >> 2) 
         + " = " +Integer.toBinaryString(a >> 2));
    System.out.println(" b >> 2  = " + (b >> 2) 
         + " = " +Integer.toBinaryString(b >> 2));
    System.out.println("\nOperador >>>");
    System.out.println(" a >>> 2  = " + (a >>> 2) 
         + " = " +Integer.toBinaryString(a >>> 2));
    System.out.println(" b >>> 2  = " + (b >>> 2) 
         + " = " +Integer.toBinaryString(b >>> 2));
  }
}
