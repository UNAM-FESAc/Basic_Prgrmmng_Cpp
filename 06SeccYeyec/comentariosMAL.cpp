#include <iostream>

char funcion_a(char *a){ //para letras
    *a ^= 32;
}

int main(){
    char var = 'b';
    std::cout<< var << std::endl;
    funcion_a(&var); //mando direccion
    std::cout<< var ;

    return 0;
}

