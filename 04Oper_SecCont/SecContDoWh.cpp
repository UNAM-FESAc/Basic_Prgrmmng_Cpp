#include <cstdlib> //contiene rand y srand para azar
#include <iostream>
#include <ctime> //con time() se obtiene el tiempo
//using namespace std;

int main(){
    srand(time(nullptr));
    int var = rand()%6;
    std::cout << "El numero aleatorio obtenido es " 
            << var<< std::endl;
    
    int i = 0;
  	do //Los bucles/loops atoran el programa al dejarlo encerrado
    { //haciendo las mismas operaciones
    	std::cout << "Las secuencias de control pueden causar "
    	    << "bucles interminables si no se cuidan." << std::endl;
      	if(i++ >3)
        	break;
      
    }while(var>1); 

    return 0;
}
