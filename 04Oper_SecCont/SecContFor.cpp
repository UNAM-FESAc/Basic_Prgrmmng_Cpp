#include <cstdlib> //contiene rand y srand para azar
#include <iostream>
#include <ctime> //con time() se obtiene el tiempo
//using namespace std;

int main(){
    srand(time(nullptr));
    int var = rand()%6 +1;
    std::cout << "El numero aleatorio obtenido es " 
            << var<< std::endl;
            
  	for(int i=0; i<var; i++){
    	std::cout << i << " ";
    }
    
  	for(int i=var; i >= 0; i--){
    	std::cout << i << " ";
    }   
    
	return 0;
}
