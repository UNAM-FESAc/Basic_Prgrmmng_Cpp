#include <iostream> 

long fibon(int a){
    if(a <= 0) return 0;
    if(a == 1) return 1;
    return fibon(a-1) + fibon(a-2);
}

int main(){
    int temp, par=0, impar=0;
    for(int i=0; i < 20 ;i++){
        temp = fibon(i);
        //std::cout <<i <<": "<< temp << std::endl; 
        if( temp%2 == 0) par++;
        else impar++;
    }
    std::cout << std::endl;
    std::cout << "Pares: " << par << std::endl;
    std::cout << "Impares: " << impar;
    
return 0;}       
