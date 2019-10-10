#include <cstdlib> //contiene rand y srand para azar
#include <iostream>
#include <ctime> //con time() se obtiene el tiempo
//using namespace std;

int main(){
    srand(time(nullptr));
    int var = rand()%6;
    std::cout << "El numero aleatorio obtenido es " 
            << var<< std::endl;
            
  	while(var>1){
    	std::cout << "While repetira esto hasta ser " 
    	    <<"falso lo que esta entre parentesis."
            << std::endl;
            
      	std::cout << "Podemos salir cuando queramos de una"
      	    << " secuencia de control, usando break."
            << std::endl;
      	break;
    }
    
	return 0;
}
