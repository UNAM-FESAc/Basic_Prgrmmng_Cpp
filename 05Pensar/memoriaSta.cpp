#include <iostream> 

int main(){
    int arreglo[6] = {3,2,4,5,3,2};
    int otro[] = {3,4,2,4,5,2};
    int sum1=0,sum2=0;
    for(int i= 0; i < 6; i++){
        sum1 += arreglo[i];
        sum2 += otro[i];
    }
    std::cout << "Suma del arreglo 1: "<<sum1 << std::endl;
    std::cout << "Suma del arreglo 2: "<<sum2 ;
    
return 0;}       
