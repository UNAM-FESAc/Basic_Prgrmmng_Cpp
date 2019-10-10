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
