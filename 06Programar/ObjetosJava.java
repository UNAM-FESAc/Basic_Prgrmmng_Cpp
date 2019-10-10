public class ObjetosJava{
    public static void main(String[] args){
  	    OtroObjeto miObjeto = new OtroObjeto("Hola Mundo!");
  	    System.out.print(miObjeto);
    }
}


public class OtroObjeto{
    private String mensaje;
    public OtroObjeto(String input){ //Constructor del objeto
	    mensaje = "Objeto Dice: " + input;
    }
    /*El siguiente metodo es necesario para poder
    ser impreso a travez de System.out.print(Objeto)*/
    public String toString(){
	    return mensaje;
    }
}
