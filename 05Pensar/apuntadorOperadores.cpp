#include <iostream>

int main(){
    int a = 255;
    std::cout << a <<" esta en la direccion " 
            << &a << std::endl;
    int* apuntador; //Se declara un apuntador
    std::cout << "El apuntador tipo int es: " << apuntador 
            << std::endl;
            
    apuntador = &a; //Se le asigna la direccion de a
    std::cout << " Y ahora es (apunta a): " << apuntador
            << ". Donde esta almacenado: " << *apuntador;
            
    *apuntador = 3; //Se cambia el valor en esta direccion
    std::cout << std::endl << "Ahora el valor en la direccion " 
            << &a << " vale " << a;

    return 0;
}

