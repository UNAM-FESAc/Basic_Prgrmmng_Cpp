public class EjercicioDos 
{
    public static void main(String[] args)
    {
        int nivel =5, actual=5, bloques=1;
        for(int i=0; i< nivel; i++){
            for(int j=actual; j> 1; j--)
                System.out.print(" ");
            for(int j=0; j< bloques; j++)
                System.out.print("*");
            bloques+=2;
            actual--;
            System.out.print("\n");
        }
    }
}
