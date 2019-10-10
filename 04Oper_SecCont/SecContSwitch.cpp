#include <cstdlib> //contiene rand y srand para azar
#include <iostream>
#include <ctime> //con time() se obtiene el tiempo
//using namespace std;

int main(){
    srand(time(nullptr));
    int var = rand()%6 +1;
    
    std::cout << "El numero aleatorio obtenido es " 
            << var<< std::endl;
      
  	switch(var){
  	    case 6: 
  	        std::cout << "Que suerte tienes!";
  	        break;
  	    case 5: 
  	        std::cout << "Muy buen numero!";
  	        break;
  	    case 4: 
  	        std::cout << "Buen numero.";
  	        break;
  	    case 3: 
  	        std::cout << "Puede ser mejor.";
  	        break;
  	    case 2: 
  	        std::cout << "Algo es algo.";
  	        break;
  	    case 1: 
  	        std::cout << "Mas suerte para la proxima.";
  	        break;
  	    default:
  	        std::cout << "Oops hay un numero no valido.";
  	        break;
  	}
    	
	return 0;
}
