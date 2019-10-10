#include <iostream>

void intercambia(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}    

int main(){
    int menor = 255;
    int mayor = 3;
    
    std::cout << menor <<" < " << mayor << std::endl;
    intercambia(&menor, &mayor);
    std::cout << menor <<" < " << mayor << std::endl;
    
    return 0;
}

