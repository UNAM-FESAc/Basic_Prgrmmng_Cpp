#include <iostream>

char funcion_a(char *a){
    *a ^= 32;
}

int main(){
    char var = 'b';
    std::cout<< var << std::endl;
    funcion_a(&var);
    std::cout<< var ;

    return 0;
}

