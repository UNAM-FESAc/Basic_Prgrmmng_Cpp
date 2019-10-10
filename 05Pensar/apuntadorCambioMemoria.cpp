#include <iostream>
//ejemplo_a asigna la direccion de b al apuntador a
void ejemplo_a(int **a, int *b){
    *a = b;
}    

int main(){
    int var = 255;
    int *pvar = &var;
    int bar = 3;
    
    std::cout << pvar <<" = " << *pvar << std::endl;
    std::cout << &bar <<" = " << bar << std::endl
            << std::endl;
    //se manda la direccion del apuntdor y el int    
    ejemplo_a(&pvar, &bar);
    std::cout << pvar <<" = " << *pvar << std::endl;
    std::cout << &bar <<" = " << bar;

    return 0;
}

