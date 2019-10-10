#include <cstdlib> //contiene rand y srand para azar
#include <iostream>
#include <ctime> //con time() se obtiene el tiempo
//using namespace std;

int main(){
    srand(time(nullptr));
    int var = rand()%6;
    std::cout << "El numero aleatorio obtenido es " 
            << var<< std::endl;
      
  	if(var>3) 
    	std::cout << var << " es mayor que 3." << std::endl;
    else if (var==3) //observa esta combinacion
    	std::cout << var << " es igual a 3." << std::endl;
  	else
    	std::cout << var << " es menor que 3." << std::endl;
    	  
	return 0;
}
