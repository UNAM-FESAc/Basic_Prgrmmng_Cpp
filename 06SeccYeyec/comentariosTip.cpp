#include <iostream>

char funcion_a(char *a){ //Cambia entre minusculas y mayusculas
    *a ^= 32;
}

char funcion_b(char a){ //Cambia entre minusculas y mayusculas
    return a ^= 32;
}

int main(){
    char var = 'b';
    std::cout<< var << std::endl;
    
    /* "//*" activa la ruta a, mientras que un "/*"
    en su lugar activa la ruta b*/
    
    /*  //ruta a
    funcion_a(&var);
    std::cout<< var ;
    /*/  //ruta b
    std::cout<< funcion_b(var) ;
    //*/

    return 0;
}

