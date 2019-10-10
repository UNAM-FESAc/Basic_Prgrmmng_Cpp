public class Principal{
    public static void main(String[] args){
  	    Padre uno = new Padre("Juan");
  	    Hijo dos = new Hijo("Juan");
  	    uno.es();
  	    dos.es();
    }
}

public class Padre{
    private String nombre;
      public Padre(String input){ //Constructor del objeto
	    nombre = input;
    }
    public void es(){
	    System.out.println("El papa se llama: " + nombre);
    }
    public String getNom(){
	    return nombre;
    }
}

public class Hijo extends Padre{ //extends indica que hereda
    public Hijo(String input){ //Constructor del objeto
	    super(input + "ito");
    }
    public void es(){ //mismo nombre de funcion, texto diferente
	    System.out.println("El hijo se llama: " + getNom());
    }
}
