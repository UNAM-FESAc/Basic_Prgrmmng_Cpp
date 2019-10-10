public class OperadoresBits
{
  public static void main(String[] args)
  {
    char a=0b0001_0011_1001;
    char b=0b01011010;
    System.out.println(" a = " + (+a) 
         + " = " +Integer.toBinaryString(a) );
    System.out.println(" b = " + (+b) 
         + " = " +Integer.toBinaryString(b) );
    System.out.println(" a & b  = " + (a & b) 
         + " = " +Integer.toBinaryString(a & b));
    System.out.println(" a ^ b  = " + (a ^ b) 
         + " = " +Integer.toBinaryString(a ^ b));
    System.out.println(" a | b  = " + (a | b) 
         + " = " +Integer.toBinaryString(a | b));
    System.out.println(" ~a  = " + (~a) 
         + " = " +Integer.toBinaryString(~a));
  }
}
