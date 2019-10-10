/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

public class Datos
{
    public static void main(String[] args)
    {//aqui se declara un dato int y
        int div=Byte.SIZE; // se le asigna un valor con =
        System.out.println("Tamanio de Byte:   " + div + " bits.\n" 
          + "	  char:   " + (Character.SIZE/div) + " Bytes.\n"
          + "	  int:    " + (Integer.SIZE/div) + " Bytes.\n"
          + "	  float:  " + (Float.SIZE/div) + " Bytes.\n"
          + "	  double: " + (Double.SIZE/div) + " Bytes.\n");
    }
}
